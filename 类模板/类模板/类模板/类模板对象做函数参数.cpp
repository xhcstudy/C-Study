#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//��ģ��Ķ����������Ĳ���
//1. ָ����������
//template <class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "����: " << this->m_Name << endl
//			<< "����: " << this -> m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void PrintPerson1(Person<string, int> &p)
//{
//	p.ShowPerson();
//}
//
//void Test1()
//{
//	Person<string, int> p("�����", 100);
//	PrintPerson1(p);
//}
//
////2. ����ģ�廯
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> &p)
//{
//	p.ShowPerson();
//	cout << "T1����������Ϊ: " << typeid(T1).name() << endl;  //��ο��Ƶ���������ʲô����
//	cout << "T2����������Ϊ: " << typeid(T2).name() << endl;
//}
//
//void Test2()
//{
//	Person<string, int> p("��˽�", 90);
//	PrintPerson2(p);
//}
//
////3. ������ģ�廯
//template <class T>
//void PrintPerson3(T &p)
//{
//	p.ShowPerson();
//	cout << "T1����������Ϊ: " << typeid(T).name() << endl;  //��ο��Ƶ���������ʲô����;
//}
//
//void Test3()
//{
//	Person<string, int> p("��ɮ", 30);
//	PrintPerson3(p);
//}
//
//int main()
//{
//	Test1();
//	Test2();
//	Test3();
//
//	system("pause");
//	return 0;
//}