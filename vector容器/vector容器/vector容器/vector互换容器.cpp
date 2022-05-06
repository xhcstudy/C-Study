#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vector互换容器   可以巧用swap实现内存收缩
//swap(vec);		//将vec与本身的元素互换

//void PrintVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////1、基本使用
//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "交换前：" << endl;
//	PrintVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//
//	PrintVector(v2);
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	PrintVector(v1);
//	PrintVector(v2);
//}
//
////2、实际用途
////巧用swap可以收缩内存空间
//void Test2()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的大小为:" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的大小为:" << v.size() << endl;
//
//	//巧用swap收缩内存
//	vector<int>(v).swap(v); //vector<int>(v)匿名对象  这行结束之后编译器自动回收   所以实现了容器的交换并且匿名对象这行代码往下走之后就被释放
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的大小为:" << v.size() << endl;
//	
//}

//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}