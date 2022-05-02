#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <iostream>
using namespace std;
#include <string>

class Worker
{
public:

	//显示个人信息
	virtual void ShowInfo() = 0;

	//获取岗位名称
	virtual string GetDeptName() = 0;

	int m_Id;
	string m_Name;
	int m_DeptId;
};