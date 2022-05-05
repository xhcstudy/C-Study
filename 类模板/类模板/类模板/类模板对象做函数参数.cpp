#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//类模板的对象做函数的参数
//1. 指定传入类型
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
//		cout << "姓名: " << this->m_Name << endl
//			<< "年龄: " << this -> m_Age << endl;
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
//	Person<string, int> p("孙悟空", 100);
//	PrintPerson1(p);
//}
//
////2. 参数模板化
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> &p)
//{
//	p.ShowPerson();
//	cout << "T1的类型名称为: " << typeid(T1).name() << endl;  //如何看推导出来的是什么类型
//	cout << "T2的类型名称为: " << typeid(T2).name() << endl;
//}
//
//void Test2()
//{
//	Person<string, int> p("猪八戒", 90);
//	PrintPerson2(p);
//}
//
////3. 整个类模板化
//template <class T>
//void PrintPerson3(T &p)
//{
//	p.ShowPerson();
//	cout << "T1的类型名称为: " << typeid(T).name() << endl;  //如何看推导出来的是什么类型;
//}
//
//void Test3()
//{
//	Person<string, int> p("唐僧", 30);
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