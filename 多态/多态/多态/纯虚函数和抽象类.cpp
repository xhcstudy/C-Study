#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//纯虚函数和抽象类
//class Base
//{
//public:
//
//	//纯虚函数
//	//只要有一个纯虚函数，这个类称为抽象类
//	//抽象类特点:
//	//1. 无法实例化对象
//	//2. 抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void Function() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void Function()
//	{
//		cout << "Function函数调用" << endl;
//	}
//};
//
//void Test1()
//{
//	//Base b;  抽象类是无法实例化对象  在栈上和堆上一样
//	//new Base;
//	//Son s;    抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
//	//new Son;
//	//Son s;
//	Base* base = new Son;
//	base->Function();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}