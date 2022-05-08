#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

#include "createWorker.h"
#include "GetGroup.h"
#include "ShowWorkerByGroup.h"
#include <time.h>

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建员工
	vector<Worker> vWorker;
	createWorker(vWorker, 10);

	//测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名: " << it->m_Name << "\t工资:" << it->m_Salary << endl;
	//}

	//2、分组
	multimap<int, Worker> mWorker;
	GetGroup(vWorker, mWorker);

	//3、显示
	ShowWorkerByGroup(mWorker);

	system("pause");
	return 0;
}