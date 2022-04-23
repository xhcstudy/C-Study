#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//引用做函数返回值
//1.不要返回局部变量的引用
int& Test1()
{
	int a = 10;
	return a;
}

//2.函数的调用可以作为左值
int& Test2()
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}

//int main()
//{
//	//int& ref = Test1();
//	//cout << "ref = " << ref << endl;
//	//cout << "ref = " << ref << endl;
//
//	int& ref2 = Test2();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	Test2() = 100;
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	system("pause");
//	return 0;
//}