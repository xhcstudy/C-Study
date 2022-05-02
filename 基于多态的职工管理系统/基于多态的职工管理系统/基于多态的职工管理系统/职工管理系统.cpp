#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//����
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Manager(2, "����", 2);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->ShowInfo();
	//delete worker;

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;

	//����չʾ�˵��ĳ�Ա����
	while (true)
	{
		wm.ShowMenu();
		cout << "����������ѡ��:>";
		cin >> choice;
		switch (choice)
		{
		case EXIT:		//�˳�ϵͳ
			wm.ExitSystem();
			break;
		case ADD:		//���ְ��
			wm.AddEmp();
			break;
		case SHOW:		//��ʾְ��
			wm.ShowEmp();
			break;
		case DELETE:	//ɾ��ְ��
			wm.DelEmp();
			break;
		case MODIFY:	//�޸�ְ��
			wm.ModEmp();
			break;
		case FIND:		//����ְ��
			wm.FindEmp();
			break;
		case SORT:		//����ְ��
			wm.SortEmp();
			break;
		case DESTROY:	//����ļ�
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