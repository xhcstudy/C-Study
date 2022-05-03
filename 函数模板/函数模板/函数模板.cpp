#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//函数模板

//两个整形交换的函数
//void SwapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型的函数
//void SwapDouble(double &a, double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
////声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
//template <typename T>  //typename 可以替换成class
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void Test1()
//{
//	int a = 10;
//	int b = 20;
//	//SwapInt(a, b);
//	//利用函数模板交换
//	//两种方式使用函数模板
//	//1.自动类型推导
//	//mySwap(a, b);
//	//2.显示指定类型
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	SwapDouble(c, d);
//
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}