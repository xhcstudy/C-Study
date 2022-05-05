#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//语法 template <typename T>
//类

//template <typename NameType, typename AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "姓名: " << this->m_Name << endl
//			<< "年龄: " << this ->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test1()
//{
//	Person<string, int>p1("孙悟空", 999);
//	p1.ShowPerson();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}