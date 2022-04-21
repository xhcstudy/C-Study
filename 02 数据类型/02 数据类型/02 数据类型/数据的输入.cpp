#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

int main()
{
	// cin >> 变量;

	//1.整形

	int a = 0;
	cout << "请给整型变量a赋值:";
	cin >> a;
	cout << "a = " << a << endl;

	//2.浮点型

	float f = 3.14f;
	cout << "请给浮点型变量f赋值:";
	cin >> f;
	cout << "f = " << f << endl;

	//3.字符型

	char ch = 0;
	cout << "请给字符型变量ch赋值:";
	cin >> ch;
	cout << "ch = " << ch << endl;

	//4.字符串型

	string str = "abcdef";
	cout << "请给字符串型变量str赋值:";
	cin >> str;
	cout << "str = " << str << endl;

	//5.布尔类型

	bool flag = true;
	cout << "请给布尔型变量flag赋值:";
	cin >> flag;
	cout << "flag = " << flag << endl;

	system("pause");
	return 0;
}