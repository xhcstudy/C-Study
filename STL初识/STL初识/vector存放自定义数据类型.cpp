#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

//vector�����д���Զ�����������
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
//	Person p1("�����", 999);
//	Person p2("��˽�", 888);
//	Person p3("��ɮ", 30);
//	Person p4("ɳ����", 777);
//	Person p5("������", 666);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����: " << (*it).m_Name << endl
//			<< "����: " << (*it).m_Age << endl;
//	}
//}
//
////����Զ����������� ָ��
//void Test2()
//{
//	vector<Person*> v;
//	Person p1("�����", 999);
//	Person p2("��˽�", 888);
//	Person p3("��ɮ", 30);
//	Person p4("ɳ����", 777);
//	Person p5("������", 666);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����: " << (*it)->m_Name << endl
//			<< "����: " << (*it)->m_Age << endl;
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