#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//STL中list是一个双向循环链表

//list构造函数
//list<T> lst;			//默认构造
//list(beg, end);		//构造函数将[beg,end)区间中的元素拷贝给本身
//list(n, elem);		//构造函数将n个elem拷贝给本身
//list(const list &lis);//拷贝构造

//void PrintList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	list<int> L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	//区间方式构造
//	list<int> L2(L1.begin(), L1.end());
//	PrintList(L2);
//
//	//拷贝构造
//	list<int> L3(L2);
//	PrintList(L3);
//
//	//n个elem
//	list<int> L4(10, 1000);
//	PrintList(L4);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}