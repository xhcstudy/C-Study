#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//ͨ��ȫ�ֺ���  ��ӡPerson����Ϣ

//template <class T1, class T2>
//class Person;
////����ʵ��
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> p)
//{
//	cout << "����:" << p.m_Name << endl;
//	cout << "����:" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	//friend void PrintPerson(Person<T1, T2> p)
//	//{
//	//	cout << "����:" << p.m_Name << endl;
//	//	cout << "����:" << p.m_Age << endl;
//	//}
//
//	//ȫ�ֺ�������ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
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