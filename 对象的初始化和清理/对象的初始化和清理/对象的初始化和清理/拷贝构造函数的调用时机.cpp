#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//拷贝构造函数的调用时机

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void Test1()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为:" << p2.m_Age << endl;
//}
//
////2.值传递的方式给函数参数传值
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
////3.值方式返回局部对象
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