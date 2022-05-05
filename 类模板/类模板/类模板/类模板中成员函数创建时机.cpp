#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//类模板函数中成员函数创建时机
//类模板中成员函数在调用时才去创建

//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template <class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//类模板中成员函数
//	void Function1()
//	{
//		obj.ShowPerson1();
//	}
//
//	void Function2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//void Test1()
//{
//	MyClass<Person1>m;
//	m.Function1();
//	//m.Function2();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}