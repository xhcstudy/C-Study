#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"

//���캯��
WorkerManager::WorkerManager()
{
	//1. �ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ�
	
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2. �ļ����� ��������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) // ifs.eof() ����ļ�Ϊ�շ��� true
	{
		//�ļ�Ϊ��
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3. �ļ����ڣ����Ҽ�¼������
	int num = this->GetEmpNum();
	//cout << "ְ������Ϊ:" << num << endl;

	this->m_EmpNum = num;
	//���ٿռ�
	this->m_EmpArray = new Worker*[num];
	//���ļ��е����ݴ浽������
	this->InitEmp();

	//���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ�����:  " << this->m_EmpArray[i]->m_Id
	//		<< "\t����:  " << this->m_EmpArray[i]->m_Name
	//		<< "\t���ű��:  " << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

//��ʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "**************************************************" << endl;
	cout << "**************��ӭʹ��ְ������ϵͳ****************" << endl;
	cout << "***************  0.�˳��������  *****************" << endl;
	cout << "***************  1.����ְ����Ϣ  *****************" << endl;
	cout << "***************  2.��ʾְ����Ϣ  *****************" << endl;
	cout << "***************  3.ɾ����ְְ��  *****************" << endl;
	cout << "***************  4.�޸�ְ����Ϣ  *****************" << endl;
	cout << "***************  5.����ְ����Ϣ  *****************" << endl;
	cout << "***************  6.���ձ������  *****************" << endl;
	cout << "***************  7.��������ĵ�  *****************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//���ְ��
void WorkerManager::AddEmp()
{
	cout << "������Ҫ��ӵ�ְ������:";
	int addNum = 0; //�����û�����������
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum; //�¿ռ��С = ԭ����¼������ + ����������

		//�����¿ռ�
		Worker** newSpace = new Worker*[newSize];

		//��ԭ���ռ��µ����ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		int i = 1;
		//�������������
		while (addNum--)
		{
			int id;
			string name;
			int dSelect;
			cout << "�������" << i << "����ְ���ı��:  " << endl;
			cin >> id;
			int ret = this->IsExit(id);
			if (ret != -1)
			{
				cout << "�ñ���Ѿ����ڣ�����������" << endl;
				addNum++;
				continue;
			}
			cout << "�������" << i << "����ְ��������:  " << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ:  " << endl;
			cout << "1. ��ְͨ��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ϰ�" << endl;
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
		
			//������ְ��ָ�룬���浽������
			newSpace[this->m_EmpNum + i - 1] = worker;
			i++;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//��ʾ
		cout << "�ɹ����" << addNum + i << "����ְ��" << endl;

		//�������ݵ��ļ���
		this->Save();

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

	}
	else
	{
		cout << "������������" << endl;
	}

	//��������� �����ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//�����ļ�
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	//��ÿ���˵�����д�뵽�ļ���
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
	ifs.open(FILENAME, ios::in);  //���ļ� ���ļ�

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//ͳ����������
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

	while ( ifs >> id && ifs >> name && ifs >> did) //��һ������
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

	//�ر��ļ�
	ifs.close();
}

void WorkerManager::ShowEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkerManager::DelEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		//����ְ���ı��ɾ��ְ��
		cout << "��������Ҫɾ��ְ���ı��:" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExit(id);
		if (index != -1)//˵��ְ������  ����Ҫɾ��������indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//����ǰ��
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;  //���������м�¼����Ա����
			//ͬ�����µ��ļ���
			this->Save();

			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	//������� ����
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ���� ������ڷ���ְ�����������е�λ�� �����ڷ���-1
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

//�޸�ְ��
void WorkerManager::ModEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
	}
	else
	{
		int id = 0;
		cout << "������Ҫ�޸�ְ���ı��:";
		cin >> id;
		int ret = this->IsExit(id);

		//ְ������
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newid = 0;
			string newname = "";
			int dSelect = 0;

			cout << "���ҵ����Ϊ" << id << "��ְ���������������ְ������Ϣ" << endl;
			 
			cout << "�������ְ���µı��:";
			cin >> newid;

			cout << "�������ְ��������:";
			cin >> newname;

			cout << "��ѡ���ְ���ĸ�λ:" << endl
				<< "1.��ְͨ��" << endl
				<< "2.����" << endl
				<< "3.�ϰ�" << endl;

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

			//�������ݵ�������
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->Save();
		}
		
		//δ���ҵ�ְ��
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	//������� ����
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::FindEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
	}
	else
	{
		int Select = 0;

		cout << "��������ҷ�ʽ:" << endl;
		cout << "1. ����Ų���" << endl
			<< "2. ����������" << endl;


		cin >> Select;
		
		if (Select == 1)
		{
			//����Ų���
			int id = 0;
			cout << "������Ҫ����ְ���ı��:";
			cin >> id;
			int ret = this->IsExit(id);
			
			//�鵽��
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ����:" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			//�Ҳ���
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}

		else if (Select == 2)
		{
			//����������
			string name;
			cout << "��������ҵ��˵�����:";
			cin >> name;

			//����һ���жϱ�־
			bool flag = false; //Ĭ��δ�ҵ�ְ��

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				//�鵽����
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ: " << this->m_EmpArray[i]->m_Id << endl;
					cout << this->m_EmpArray[i]->m_Id << "��ְ������Ϣ����:" << endl;
					flag = true;

					//������ʾ��Ϣ�Ľӿ�
					this->m_EmpArray[i]->ShowInfo();
				}
			}

			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "��������������" << endl;
		}
	}

	//�����������
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::SortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "����������ķ�ʽ:" << endl;
		cout << "1.����ְ���ı����������" << endl
			<< "1.����ְ���ı�Ž�������" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i; //������Сֵ �� ���ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1) // ����
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else   //����
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}

			//�ж�һ��ʼ�϶� ����Сֵ�������ֵ �ǲ��Ǽ���� ��Сֵ�������ֵ ������� ��������
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}

		}

		cout << "����ɹ��������Ľ��Ϊ:" << endl;
		this->Save();//�����Ľ�����浽�ļ���
		this->ShowEmp();//չʾ���е�ְ��
	}
}

//�����ļ�
void WorkerManager::CleanFile()
{
	cout << "ȷ�������?" << endl;
	cout << "1.ȷ��" << endl
		<< "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");
}

//��������
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
