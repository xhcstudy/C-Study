#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
void Function(int &a)
{
	cout << "Function(int &a)的调用" << endl;
}

void Function(const int &a)
{
	cout << "Function(const int &a)的调用" << endl;
}

//2.函数重载碰到默认参数
void Function2(int a)
{
	cout << "Function2(int a)的调用" << endl;
}

void Function2(int a, int b = 10)
{
	cout << "Function2(int a, int b = 10)的调用" << endl;
}

int main()
{
	int a = 10;
	Function(a);
	Function(10);// 调用const int &a  相当于 int temp = 10; int &a = temp;

	//Function2(10); 当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况

	system("pause");
	return 0;
}