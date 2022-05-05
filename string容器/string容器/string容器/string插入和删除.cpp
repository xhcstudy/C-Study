#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string的插入和删除

//string& insert(int pos, const char* s);			//插入字符串
//string& insert(int pos, const string& s);			//插入字符串
//string& insert(int pos, int n, char c);			//在指定位置插入n个字符c
//string& erase(int pos, int n = npos);				//删除从Pos位置开始的n个字符

//void Test1()
//{
//	string str = "hello";
//
//	//插入
//	str.insert(1, "111");
//	//hello - h111ello
//	cout << "str = " << str << endl;
//
//	//删除
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}