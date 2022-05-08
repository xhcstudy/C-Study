#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <map>

//map的基本概念
//map中所有元素都是pair
//pair中第一个元素为key(键值),起到索引作用，第二个元素为value(实值)
//所有元素都会根据元素的键值自动排序

//本质:map/multimap属于关联式容器，底层结构是用二叉树实现。

//优点:可以根据键值快速找到value值

//map和multimap区别
//map不允许容器中有重复key值元素
//multimap允许容器中有重复key值元素

//构造
//map<T1, T2> mp;					//map默认构造函数
//map(const map &mp);				//拷贝构造

//赋值
//map& operator=(const map &mp);	//operator=

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	//创建map容器
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	PrintMap(m);
//
//	//拷贝构造
//	map<int, int>m2(m);
//	PrintMap(m2);
//
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	PrintMap(m3);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}