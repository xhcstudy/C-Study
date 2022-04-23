#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int g_a = 10;
const int c_g_b = 15;

//int main()
//{
//	//C++中在程序运行前分为全局区和代码区
//	//代码区特点是共享和只读
//	//全局区中存放全局变量、静态变量、常量
//	//常量区中存放const修饰的全局常量和字符串常量
//  //代码区存放函数体的二进制代码，由操作系统管理
//	//全局区
//
//	//全局变量、静态变量、常量  观察三个量的地址知道这三个地址很近 说明三个量都丢在一起，丢在全局区中
//
//	//局部变量
//	int a = 10;
//	const int c_b = 15;
//
//	cout << "局部变量a的地址为:" << &a << endl;
//
//	//全局变量
//	cout << "全局变量g_a的地址为" << &g_a << endl;
//
//	//静态变量
//	static int s_a = 10;
//	cout << "静态变量s_a的地址为:" << &s_a << endl;
//
//	//常量
//	//字符串常量
//	cout << "字符串常量hello world的地址为:" << &"hello world" << endl;
//
//	//const修饰的常量
//	//const修饰的全局变量
//	//const修饰的局部变量(const修饰的局部变量不在全局区)
//	cout << "全局变量c_g_b的地址为" << &c_g_b << endl;
//	cout << "局部变量c_b的地址为" << &c_b << endl;
//
//	system("pause");
//	return 0;
//}