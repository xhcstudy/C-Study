#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <string>

//���������㷨����С���㷨��ʹ��ʱ����ͷ�ļ�Ϊ #include <numeric>
//accumulate(iterator beg, iterator end, value);		��������������Ԫ���ۼ��ܺ�	value - ��ʼ�ۼ�ֵ

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
//	Person p1("����", 20);
//	Person p2("����", 25);
//	Person p3("����", 23);
//	Person p4("����", 22);
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
//	cout << "�����������˵������ܺ�Ϊ:" << total << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}