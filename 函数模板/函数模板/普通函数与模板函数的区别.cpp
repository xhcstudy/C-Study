#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//普通函数与函数模板的区别

//1.普通函数调用可以发生隐式类型转换

//2.函数模板 用自动类型推导，不可以发生隐式类型转换

//3.函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template <typename T>
//int myAdd2(T a, T b)
//{
//	return a + b;
//}
//
//void Test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c'; // a - 97  c - 99
//	cout << myAdd1(a, c) << endl;
//
//	//自动类型推导
//	cout << myAdd2(a, b) << endl;
//	//cout << myAdd2(a, c) << endl;   不能发生隐式转换
//	cout << myAdd2<int>(a, c) << endl;   //能发生隐式类型转换
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}