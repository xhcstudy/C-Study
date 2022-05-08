#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

#include "createWorker.h"
#include "GetGroup.h"
#include "ShowWorkerByGroup.h"
#include <time.h>

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1������Ա��
	vector<Worker> vWorker;
	createWorker(vWorker, 10);

	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "����: " << it->m_Name << "\t����:" << it->m_Salary << endl;
	//}

	//2������
	multimap<int, Worker> mWorker;
	GetGroup(vWorker, mWorker);

	//3����ʾ
	ShowWorkerByGroup(mWorker);

	system("pause");
	return 0;
}