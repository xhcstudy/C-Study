#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//deque插入和删除  头插、尾插、头删、尾删、指定位置插入和删除、clear

//void PrintDeque(deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////两端操作
//void Test1()
//{
//	deque<int> d1;
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(10);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	PrintDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	PrintDeque(d1);
//
//	//头删
//	d1.pop_front();
//	PrintDeque(d1);
//}
//
//void Test2()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	PrintDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	PrintDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	PrintDeque(d1);
//
//	//按照区间插入
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	PrintDeque(d1);
//}
//
//void Test3()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	PrintDeque(d1);
//
//	//按照区间方式删除
//	//d1.erase(d1.begin(), d1.end());
//
//	//清空
//	d1.clear();
//	PrintDeque(d1);
//}
//
//int main()
//{
//	//Test1();
//	//Test2();
//	Test3();
//
//	system("pause");
//	return 0;
//}