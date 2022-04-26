#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//在C++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上

//class Person
//{
//	int m_A; // 非静态成员变量  属于类的对象上的
//
//	static int m_B; // 静态成员变量
//
//	void Function() // 非静态成员函数
//	{
//
//	}
//
//	static void Function2() // 静态成员函数
//	{
//
//	}
//};
//int Person::m_B = 0;
//
//void Test1()
//{
//	Person p;
//	//空对象占用内存空间为:
//	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//
//void Test2()
//{
//	Person p;
//
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}