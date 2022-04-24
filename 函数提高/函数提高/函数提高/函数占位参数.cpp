#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//占位参数
//占位参数还可以有默认参数
void Function(int a, int = 100)
{
	cout << "this is Function" << endl;
}

//int main()
//{
//	Function(10);
//	Function(10, 10);
//	system("pause");
//	return 0;
//}