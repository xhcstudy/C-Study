#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//��ģ���Ա��������ʵ��
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
//	//	cout << "����:" << m_Name << endl
//	//		<< "����:" << m_Age << endl;
//	//}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1,T2>::ShowPerson()
//{
//	cout << "����:" << m_Name << endl
//		<< "����:" << m_Age << endl;
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