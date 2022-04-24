#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string m_Name;
	void SetName(string name)
	{
		m_Name = name;
	}
	void ShowInfomation()
	{
		cout << "姓名:" << m_Name << endl;
	}
};

class c1
{
	int m_A; //默认权限是私有
};

struct s1
{
	int m_A; //默认权限是共有
};

//int main()
//{
//	Student s1;
//	s1.SetName("肖浩聪");
//	s1.ShowInfomation();
//
//	//C++中struct和class唯一的区别就在于默认的访问权限不同
//	//struct默认权限为公共，class默认权限为私有
//	//c1 C1;
//	//C1.m_A = 100;  权限是私有不可以在类外访问
//	struct s1 S1;
//	S1.m_A = 100;
//
//	system("pause");
//	return 0;
//}