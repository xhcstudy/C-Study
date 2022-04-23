#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	//引用的本质就是指针常量
//	int a = 10;
//	int& ref = a;//编译器会自动转化为 int* const ref = &a; 所以ref不能改指向 能改值
//	ref = 20;//编译器检测到是引用，会自动转化为 *ref = 20;
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	system("pause");
//	return 0;
//}