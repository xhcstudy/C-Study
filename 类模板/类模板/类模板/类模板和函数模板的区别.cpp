#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//类模板和函数模板的区别
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数
//template <class NameType, class AgeType = int>
//class Person
//{
//public:
	//Person(NameType name, AgeType age)
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
//
//	void ShowPerson()
//	{
//		cout << "姓名: " << this->m_Name << endl
//			<< "年龄: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test1()
//{
//	//Person p("孙悟空", 1000); 错误，无法用自动类型推导
//	Person<string, int> p("孙悟空", 1000); //正确	只能用显示指定类型
//	p.ShowPerson();
//}
//
//void Test2()
//{
//	Person<string> p("猪八戒", 999);
//	p.ShowPerson();
//}
//
//int main()
//{
//	Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}