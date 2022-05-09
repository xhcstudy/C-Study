#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <string>

//算术生成算法属于小型算法，使用时包含头文件为 #include <numeric>
//accumulate(iterator beg, iterator end, value);		计算区间内容器元素累计总和	value - 起始累加值

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class AddPerson
//{
//public:
//	int operator()(int val, const Person &p1)
//	{
//		return val + p1.m_Age;
//	}
//};
//
//void Test1()
//{
//	vector<Person> v;
//	
//	Person p1("张三", 20);
//	Person p2("李四", 25);
//	Person p3("王五", 23);
//	Person p4("赵六", 22);
//	Person p5("yrl", 21);
//	Person p6("xhc", 20);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//	
//	int total = accumulate(v.begin(), v.end(), 0, AddPerson());
//	cout << "容器中所有人的年龄总和为:" << total << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}