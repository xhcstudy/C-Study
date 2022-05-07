#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set容器的基本概念
//所有元素都会在插入时自动被赋值
//本质:set/multiset属于关联式容器，底层结构是用二叉树实现。

//set和multiset区别:
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素

//set构造和赋值
//set<T> st;						//默认构造
//set(const set &st);				//拷贝构造

//set& operator=(const set &st); //重载等号操作符
//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void Test1()
//{
//	set<int> s1;
//
//	//插入数据  只有insert方式
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(20);
//	
//	PrintSet(s1);
//	//10 20 30 40 插入的时候就会自动给你排序,并且不允许插入重复元素 里面只有一个20
//
//	//拷贝构造
//	set<int> s2(s1);
//	PrintSet(s1);
//
//	//赋值
//	set<int> s3;
//	s3 = s2;
//	PrintSet(s1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}