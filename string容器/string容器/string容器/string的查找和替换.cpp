#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string查找和替换

//1.查找
//void Test1()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串，pos = " << pos << endl;
//	}
//
//	//rfind 和 find的区别
//	//rfind从右往左查找 find从左往右查找
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
//
////2.替换
//void Test2()
//{
//	string str1 = "abcdefg";
//
//	//从1号位置起 3个字符 替换为"1111"
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}