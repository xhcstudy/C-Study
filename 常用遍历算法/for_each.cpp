#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//算法头文件主要有 algorithm  functional  numeric
//algorithm 是所有STL头文件中最大的一个，范围涉及比较、交换、查找、遍历操作、赋值、修改等等
//numeric 体积很小，只包括几个在序列上面进行简单数学运算的模板函数
//functional 定义了一些模板类，用以声明函数对象

//常用的遍历算法 
//for_each 遍历容器
//transform 搬运容器到另一个容器中

//普通函数
//void Print1(int val)
//{
//	cout << val << " ";
//}
//
////仿函数
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void Test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), Print1);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}