#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//概念:
//返回bool类型的仿函数为谓词
//如果operator()接受一个参数，那么叫做一元谓词
//如果operator()接受两个参数，那么叫做二元谓词

//一元谓词
//class GreaterFive
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 5;
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
//
//	//查找容器中 有没有大于5的数字
//	//GreaterFive() 匿名函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了大于五的数字:" << *it << endl;
//	}
//}
//
////二元谓词
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void Test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//使用函数对象  改变算法策略，变为排序规则为降序
//	sort(v.begin(), v.end(), MyCompare());
//	cout << "-----------------------"<<endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
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