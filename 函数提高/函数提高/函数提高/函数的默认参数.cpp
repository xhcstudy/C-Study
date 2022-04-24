#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//函数默参数 - 如果传了用传过去的参数，如果没传使用默认值

int Function(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//int Function2(int a, int b, int c = 10, int d)
//{
//	return a + b + c;
//}

//2.如果函数的声明有了默认参数，函数的实现就不能有默认参数了
//int Function3(int a, int b = 10, int c = 10);
//
//int Function3(int a, int b = 10, int c = 10)
//{
//	return a + b + c;
//}

//int main()
//{
//	cout << Function(10, 20, 30) << endl;
//	cout << Function(10) << endl;
//	cout << Function(10, 30) << endl;
//
//	//cout << Function3(10, 20, 30) << endl;
//
//	system("pause");
//	return 0;
//}