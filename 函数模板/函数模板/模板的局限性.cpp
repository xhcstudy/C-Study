#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include <string>

//ģ���ͨ���Բ��������ܵ�
//��Щ�ص��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:

	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	int m_Age;
	string m_Name;
};

//�Ա����������Ƿ���Ⱥ���
template <class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾��ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person &p1, Person &p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Test1()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void Test2()
{
	Person p1("Tom", 10);
	Person p2("Tom", 12);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main()
{
	//Test1();
	Test2();

	system("pause");
	return 0;
}