#define _CRT_SECURE_NO_WARNINGS 1

#include "GetGroup.h"

void GetGroup(vector<Worker> &vWorker, multimap<int, Worker> &mWorker)
{
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		int DepId = rand() % 3;
		mWorker.insert(pair<int, Worker>(DepId, *it));
	}
}