#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string和char*的区别
//char* 是一个指针 而 string是一个类，类的内部封装了char*，管理这个字符串，是一个char*型的容器。

//string的构造函数

//  string();						//创建一个空字符串  例如: string str;
//  string(const char* s);			//使用字符串s初始化
//  string(const string &s);		//使用一个string对象初始化另一个string对象
//  string(int n, char c);			//使用n个字符c初始化

//void Test1()
//{
//	string s1; //默认构造
//
//	const char* str = "hello world";
//	string s2(str);
//	
//	cout << "s2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}