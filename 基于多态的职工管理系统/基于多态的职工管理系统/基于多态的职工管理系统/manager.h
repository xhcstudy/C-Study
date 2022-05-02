#define _CRT_SECURE_NO_WARNINGS 1

#pragma once 

#include <iostream>
using namespace std;
#include <string>
#include "worker.h"

class Manager :public Worker
{
public:

	//构造函数
	Manager(int id, string name, int did);

	//显示个人信息
	virtual void ShowInfo();

	//获取岗位名称
	virtual string GetDeptName();
};