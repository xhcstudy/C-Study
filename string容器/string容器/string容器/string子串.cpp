#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string子串
//string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串

void Test1()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//实用操作
void Test2()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中 获取 用户名信息
	int pos = email.find("@");

	string username = email.substr(0, pos);
	cout << "username = " << username << endl;
}

int main()
{
	//Test1();
	Test2();

	system("pause");
	return 0;
}