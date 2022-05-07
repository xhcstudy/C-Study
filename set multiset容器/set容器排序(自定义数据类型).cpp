#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <set>


//set��������  ����Զ�����������  ��Ҫָ���������

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class MyCompare
{
public:
	bool operator()(const Person &p1, const Person &p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void Test1()
{
	set<Person,MyCompare> s;

	//��������
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "����:" << it->m_Name << "\t����:" << it->m_Age << endl;
	}
}

int main()
{
	Test1();

	system("pause");
	return 0;
}