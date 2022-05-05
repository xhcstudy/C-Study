#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//通过全局函数  打印Person的信息

//template <class T1, class T2>
//class Person;
////类外实现
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> p)
//{
//	cout << "姓名:" << p.m_Name << endl;
//	cout << "年龄:" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	//全局函数 类内实现
//	//friend void PrintPerson(Person<T1, T2> p)
//	//{
//	//	cout << "姓名:" << p.m_Name << endl;
//	//	cout << "年龄:" << p.m_Age << endl;
//	//}
//
//	//全局函数类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
//	friend void PrintPerson2<>(Person<T1, T2> p);
//
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//void Test1()
//{
//	Person<string, int> p("Tom", 18);
//	PrintPerson2(p);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}