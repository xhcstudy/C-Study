#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//交换函数

//1.值传递
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.址传递
void mySwap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void mySwap3(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap1(a, b);//值传递，形参不会修饰实参
//	//mySwap2(&a, &b);
//	mySwap3(a, b);
//	cout << "a = " << a << "\tb = " << b << endl;
//	system("pause");
//	return 0;
//}