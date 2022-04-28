#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//继承同名静态成员的处理方式
//静态成员和非静态成员出现同名，处理方式一致

//class Base
//{
//public:
//
//	static void Function()
//	{
//		cout << "Base的Function()函数调用" << endl;
//	}
//
//	static void Function(int a)
//	{
//		cout << "Base的Function(int)函数调用" << endl;
//	}
//
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static void Function()
//	{
//		cout << "Son的Function()函数调用" << endl;
//	}
//
//	static int m_A;
//};
//int Son::m_A = 200;
//
//void Test1()
//{
//	//1.通过对象访问
//	Son s;
//	cout << "Son下的m_A = " << s.m_A << endl;
//	cout << "Base下的m_A = " << s.Base::m_A << endl;
//	s.Function();
//	s.Base::Function();
//	//如果子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有同名成员函数包括重载
//	//s.Function(10);
//	s.Base::Function(10);
//
//	//通过类名方式访问
//	cout << "Son下的m_A = " << Son::m_A << endl;
//	cout << "Base下的m_A = " << Son::Base::m_A << endl;
//	Son::Function();
//	Son::Base::Function();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}