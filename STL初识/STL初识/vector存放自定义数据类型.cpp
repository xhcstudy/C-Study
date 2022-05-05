#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

//vector容器中存放自定义数据类型
//class Person
//{
//public:
//
//	Person(){};
//	
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void Test1()
//{
//	vector<Person> v;
//	Person p1("孙悟空", 999);
//	Person p2("猪八戒", 888);
//	Person p3("唐僧", 30);
//	Person p4("沙和尚", 777);
//	Person p5("白龙马", 666);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名: " << (*it).m_Name << endl
//			<< "年龄: " << (*it).m_Age << endl;
//	}
//}
//
////存放自定义数据类型 指针
//void Test2()
//{
//	vector<Person*> v;
//	Person p1("孙悟空", 999);
//	Person p2("猪八戒", 888);
//	Person p3("唐僧", 30);
//	Person p4("沙和尚", 777);
//	Person p5("白龙马", 666);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名: " << (*it)->m_Name << endl
//			<< "年龄: " << (*it)->m_Age << endl;
//	}
//}
//
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}