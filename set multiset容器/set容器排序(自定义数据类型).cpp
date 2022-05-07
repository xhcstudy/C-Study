#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <set>


//set容器排序  存放自定义数据类型  需要指定排序规则

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

	//创建对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名:" << it->m_Name << "\t年龄:" << it->m_Age << endl;
	}
}

int main()
{
	Test1();

	system("pause");
	return 0;
}