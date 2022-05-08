#define _CRT_SECURE_NO_WARNINGS 1

#include "createWorker.h"
#include "Worker.h"

void createWorker(vector<Worker> &vWorker, int n)
{
	for (int i = 0; i < n; i++)
	{
		Worker worker;
		string name = "Ô±¹¤";
		worker.m_Name = name + nameSeed[i];
		worker.m_Salary = rand() % 10001 + 10000;
		vWorker.push_back(worker);
	}
}