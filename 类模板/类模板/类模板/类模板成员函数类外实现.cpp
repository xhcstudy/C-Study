#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//类模板成员函数类外实现
//template <class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
//	//}
//
//	void ShowPerson();
//	//{
//	//	cout << "姓名:" << m_Name << endl
//	//		<< "年龄:" << m_Age << endl;
//	//}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1,T2>::ShowPerson()
//{
//	cout << "姓名:" << m_Name << endl
//		<< "年龄:" << m_Age << endl;
//}
//
//void Test1()
//{
//	Person<string, int> p("Tom", 20);
//	p.ShowPerson();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}