#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//继承中同名成员处理
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void Function()
//	{
//		cout << "Base的Function函数调用" << endl;
//	}
//
//	//如果子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有同名成员函数包括重载
//	void Function(int a)
//	{
//		cout << "Base的Function（int）函数调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void Function()
//	{
//		cout << "Son的Function函数调用" << endl;
//	}
//
//	int m_A;
//};
//
//
////同名的成员属性处理
//void Test1()
//{
//	Son s;
//	cout << "Son  下的m_A = " << s.m_A << endl;
//	//如果通过子类对象 访问到父类中的同名成员，需要加作用域
//	cout << "Base 下的m_A = " << s.Base::m_A << endl;
//}
//
////同名的成员函数处理
//void Test2()
//{
//	Son s;
//	//如果子类中没写Funciton 直接调用会调用父类中的Function
//	//如果子类中写了同名成员函数，则不加作用域默认调用子类函数
//	//要想调用父类中的函数需要加作用域
//	//成员属性也是一样
//	//因为编译器在创建子类对象时会默认帮你创建一个父类对象
//	s.Function();
//	s.Base::Function();
//	//如果子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有同名成员函数包括重载
//	//s.Function(100);
//	s.Base::Function(100);
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