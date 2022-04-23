#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	//1.引用必须初始化
//	int a = 10;
//	//int &b; error
//
//	//2.引用在初始化之后就不能改变
//	int &b = a;
//	int c = 20;
//	b = c;//不是将b改成c的别名  而是将c的值赋给b
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//	return 0;
//}