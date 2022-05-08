#define _CRT_SECURE_NO_WARNINGS 1

#include "ShowWorkerByGroup.h"

void ShowWorkerByGroup(multimap<int, Worker> &mWorker)
{
	cout << "��������:" << endl;
	int count = mWorker.count(MEISHU);
	multimap<int, Worker>::iterator pos = mWorker.find(MEISHU);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "����:" << pos->second.m_Name << "\t����:" << pos->second.m_Salary << endl;
	}

	cout << "------------------------------------------" << endl;
	cout << "�߻�����:" << endl;
	count = mWorker.count(CEHUA);
	pos = mWorker.find(CEHUA);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "����:" << pos->second.m_Name << "\t����:" << pos->second.m_Salary << endl;
	}

	cout << "------------------------------------------" << endl;
	cout << "�з�����:" << endl;
	count = mWorker.count(YANFA);
	pos = mWorker.find(YANFA);
	for (; pos != mWorker.end() && count != 0; pos++, count--)
	{
		cout << "����:" << pos->second.m_Name << "\t����:" << pos->second.m_Salary << endl;
	}
}