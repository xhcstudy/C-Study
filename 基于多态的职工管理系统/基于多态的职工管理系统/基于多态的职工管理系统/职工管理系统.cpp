#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//测试
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->ShowInfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;

	//调用展示菜单的成员函数
	while (true)
	{
		wm.ShowMenu();
		cout << "请输入您的选择:>";
		cin >> choice;
		switch (choice)
		{
		case EXIT:		//退出系统
			wm.ExitSystem();
			break;
		case ADD:		//添加职工
			wm.AddEmp();
			break;
		case SHOW:		//显示职工
			wm.ShowEmp();
			break;
		case DELETE:	//删除职工
			wm.DelEmp();
			break;
		case MODIFY:	//修改职工
			wm.ModEmp();
			break;
		case FIND:		//查找职工
			wm.FindEmp();
			break;
		case SORT:		//排序职工
			wm.SortEmp();
			break;
		case DESTROY:	//清空文件
			wm.CleanFile();
			break;
		default:
			system("cls");
			break;
		}
	}	

	system("pause");

	return 0;
}