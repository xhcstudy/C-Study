#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Employee:public Worker
{
public:

	//���캯��
	Employee(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void ShowInfo();

	//��ȡ��λ����
	virtual string GetDeptName();
};