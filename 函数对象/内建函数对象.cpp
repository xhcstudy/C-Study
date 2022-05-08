#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//STL内建了一些函数对象 用之前需要引头文件 #include <functional>
//分类: 算术仿函数		关系仿函数		逻辑仿函数

//算术仿函数:
//其中negate是一元运算，其他都是二元运算

//negate 一元仿函数 取反反函数

void Test1()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus   二元仿函数 加法运算

void Test2()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

//关系仿函数
//大于 greater

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void Test3()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//逻辑仿函数
//逻辑非 logical_not

void Test4()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非  将容器v 搬运到 容器v2中 并执行取反操作
	vector<bool> v2;
	v2.resize(v.size());
	
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	Test4();

	system("pause");
	return 0;
}