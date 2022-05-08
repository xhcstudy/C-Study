#define _CRT_SECURE_NO_WARNINGS 1

#include "ShowWorkerByGroup.h"

void ShowWorkerByGroup(multimap<int, Worker> &mWorker)
{
	cout << "美术部门:" << endl;
	int count = mWorker.count(MEISHU);
	multimap<int, Worker>::iterator pos = mWorker.find(MEISHU);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资:" << pos->second.m_Salary << endl;
	}

	cout << "------------------------------------------" << endl;
	cout << "策划部门:" << endl;
	count = mWorker.count(CEHUA);
	pos = mWorker.find(CEHUA);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资:" << pos->second.m_Salary << endl;
	}

	cout << "------------------------------------------" << endl;
	cout << "研发部门:" << endl;
	count = mWorker.count(YANFA);
	pos = mWorker.find(YANFA);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资:" << pos->second.m_Salary << endl;
	}
}