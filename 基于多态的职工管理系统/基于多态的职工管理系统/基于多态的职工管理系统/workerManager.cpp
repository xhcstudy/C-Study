#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"

//构造函数
WorkerManager::WorkerManager()
{
	//1. 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //读文件
	
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2. 文件存在 但是数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) // ifs.eof() 如果文件为空返回 true
	{
		//文件为空
		//cout << "文件为空" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3. 文件存在，并且记录了数据
	int num = this->GetEmpNum();
	//cout << "职工人数为:" << num << endl;

	this->m_EmpNum = num;
	//开辟空间
	this->m_EmpArray = new Worker*[num];
	//将文件中的数据存到数组中
	this->InitEmp();

	//测试代码
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "职工编号:  " << this->m_EmpArray[i]->m_Id
	//		<< "\t姓名:  " << this->m_EmpArray[i]->m_Name
	//		<< "\t部门编号:  " << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

//显示菜单
void WorkerManager::ShowMenu()
{
	cout << "**************************************************" << endl;
	cout << "**************欢迎使用职工管理系统****************" << endl;
	cout << "***************  0.退出管理程序  *****************" << endl;
	cout << "***************  1.增加职工信息  *****************" << endl;
	cout << "***************  2.显示职工信息  *****************" << endl;
	cout << "***************  3.删除离职职工  *****************" << endl;
	cout << "***************  4.修改职工信息  *****************" << endl;
	cout << "***************  5.查找职工信息  *****************" << endl;
	cout << "***************  6.按照编号排序  *****************" << endl;
	cout << "***************  7.清空所有文档  *****************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

//退出系统
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//添加职工
void WorkerManager::AddEmp()
{
	cout << "请输入要添加的职工数量:";
	int addNum = 0; //保存用户的输入数量
	cin >> addNum;
	if (addNum > 0)
	{
		//添加
		//计算添加新空间大小
		int newSize = this->m_EmpNum + addNum; //新空间大小 = 原来记录的人数 + 新增的人数

		//开辟新空间
		Worker** newSpace = new Worker*[newSize];

		//将原来空间下的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		int i = 1;
		//批量添加新数据
		while (addNum--)
		{
			int id;
			string name;
			int dSelect;
			cout << "请输入第" << i << "个新职工的编号:  " << endl;
			cin >> id;
			int ret = this->IsExit(id);
			if (ret != -1)
			{
				cout << "该编号已经存在，请重新输入" << endl;
				addNum++;
				continue;
			}
			cout << "请输入第" << i << "个新职工的姓名:  " << endl;
			cin >> name;
			cout << "请选择该职工的岗位:  " << endl;
			cout << "1. 普通职工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> dSelect; 

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
		
			//将创建职工指针，保存到数组中
			newSpace[this->m_EmpNum + i - 1] = worker;
			i++;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		//提示
		cout << "成功添加" << addNum + i << "名新职工" << endl;

		//保存数据到文件中
		this->Save();

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	//按任意键后 清屏回到上级目录
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	//将每个人的数据写入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "\t"
			<< this->m_EmpArray[i]->m_Name << "\t"
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();

}

int WorkerManager::GetEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  //打开文件 读文件

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//统计人数变量
		num++;
	}

	return num;
}

void WorkerManager::InitEmp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;
	int i = 0;

	while ( ifs >> id && ifs >> name && ifs >> did) //读一行数据
	{
		Worker* worker = NULL;
		if (did == 1)
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);
		}
		else
		{
			worker = new Boss(id, name, did);
		}
		this->m_EmpArray[i] = worker;
		i++;
	}

	//关闭文件
	ifs.close();
}

void WorkerManager::ShowEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

//删除职工
void WorkerManager::DelEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		//按照职工的编号删除职工
		cout << "请输入需要删除职工的编号:" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExit(id);
		if (index != -1)//说明职工存在  并且要删除数组中index位置上的职工
		{
			//数据前移
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//数据前移
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;  //更新数组中记录的人员个数
			//同步更新到文件中
			this->Save();

			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}
	}

	//按任意键 清屏
	system("pause");
	system("cls");
}

//判断职工是否存在 如果存在返回职工所在数组中的位置 不存在返回-1
int WorkerManager::IsExit(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

//修改职工
void WorkerManager::ModEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入要修改职工的编号:";
		cin >> id;
		int ret = this->IsExit(id);

		//职工存在
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newid = 0;
			string newname = "";
			int dSelect = 0;

			cout << "查找到编号为" << id << "的职工，请重新输入该职工的信息" << endl;
			 
			cout << "请输入该职工新的编号:";
			cin >> newid;

			cout << "请输入该职工的姓名:";
			cin >> newname;

			cout << "请选择该职工的岗位:" << endl
				<< "1.普通职工" << endl
				<< "2.经理" << endl
				<< "3.老板" << endl;

			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newid, newname, 1);
				break;
			case 2:
				worker = new Manager(newid, newname, 2);
				break;
			case 3:
				worker = new Boss(newid, newname, 3);
				break;
			default:
				break;
			}

			//更新数据到数组中
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << endl;

			//保存到文件中
			this->Save();
		}
		
		//未查找到职工
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}

	//按任意键 清屏
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::FindEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空" << endl;
	}
	else
	{
		int Select = 0;

		cout << "请输入查找方式:" << endl;
		cout << "1. 按编号查找" << endl
			<< "2. 按姓名查找" << endl;


		cin >> Select;
		
		if (Select == 1)
		{
			//按编号查找
			int id = 0;
			cout << "请输入要查找职工的编号:";
			cin >> id;
			int ret = this->IsExit(id);
			
			//查到了
			if (ret != -1)
			{
				cout << "查找成功，该职工信息如下:" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			//找不到
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}

		else if (Select == 2)
		{
			//按姓名查找
			string name;
			cout << "请输入查找的人的姓名:";
			cin >> name;

			//加入一个判断标志
			bool flag = false; //默认未找到职工

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				//查到此人
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为: " << this->m_EmpArray[i]->m_Id << endl;
					cout << this->m_EmpArray[i]->m_Id << "号职工的信息如下:" << endl;
					flag = true;

					//调用显示信息的接口
					this->m_EmpArray[i]->ShowInfo();
				}
			}

			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入有误，请重试" << endl;
		}
	}

	//按任意键清屏
	system("pause");
	system("cls");
}

//排序职工
void WorkerManager::SortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请排序排序的方式:" << endl;
		cout << "1.按照职工的编号升序排列" << endl
			<< "1.按照职工的编号降序排列" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i; //声明最小值 或 最大值下标
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1) // 升序
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else   //降序
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}

			//判断一开始认定 的最小值或者最大值 是不是计算的 最小值或者最大值 如果不是 交换数据
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}

		}

		cout << "排序成功，排序后的结果为:" << endl;
		this->Save();//排序后的结果保存到文件中
		this->ShowEmp();//展示所有的职工
	}
}

//请问文件
void WorkerManager::CleanFile()
{
	cout << "确定清空吗?" << endl;
	cout << "1.确定" << endl
		<< "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}

//析构函数
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
	}
	delete[] this->m_EmpArray;
	this->m_EmpArray = NULL;
}
