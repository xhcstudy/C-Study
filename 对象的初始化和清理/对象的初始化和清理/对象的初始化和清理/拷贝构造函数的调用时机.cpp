#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�������캯���ĵ���ʱ��

//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_Age;
//};
//
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void Test1()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2������Ϊ:" << p2.m_Age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
//void DoWork(Person p)
//{
//
//}
//
//void Test2()
//{
//	Person p;
//	DoWork(p);
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Person DoWork2()
//{
//	Person p1(10);
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void Test3()
//{
//	Person p = DoWork2();
//	cout << (int*)&p << endl;
//}

//int main()
//{
//	//Test1();
//	//Test2();
//	Test3();
//
//	system("pause");
//	return 0;
//}