#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set大小和交换
//size();		//返回容器中元素的数目
//empty();	//判断容器是否为空
//swap(st);	//交换两个容器

//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void Test1()
//{
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//打印容器
//	PrintSet(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器的大小为:" << s1.size() << endl;
//	}
//}
//
////交换
//void Test2()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int> s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "s1交换前:" << endl;
//	PrintSet(s1);
//
//	cout << "s1交换后:" << endl;
//	s1.swap(s2);
//	PrintSet(s1);
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