#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//函数重载
//C++中函数名可以相同，提高函数名的复用性
//函数重载满足的条件:
//同一个作用域下
//函数名称相同
//函数的   参数类型 不同    或者个数 不同    或者顺序 不同
//注意:函数的返回值不可以作为函数重载的条件

void Function()
{
	cout << "Funtion的调用" << endl;
}

void Function(int)
{
	cout << "Function(int)的调用!" << endl;
}

void Function(double a)
{
	cout << "Function(double)的调用!" << endl;
}

void Function(double a, int b)
{
	cout << "Function(double a, int b)的调用!" << endl;
}

void Function(int a, double b)
{
	cout << "Function(int a, double b)的调用!" << endl;
}

//int main()
//{
//	Function();
//	Function(10);
//	Function(3.14);
//	Function(10, 3.14);
//	Function(3.14, 10);
//
//	system("pause");
//	return 0;
//}