#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//之前其他方式都已经涉猎过  
//remove(elem);  删除容器中所有与elem值匹配的元素

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
//	list<int> L;
//
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	PrintList(L);
//
//	//尾删
//	L.pop_back();
//	PrintList(L);
//
//	//头删
//	L.pop_front();
//	PrintList(L);
//
//	//insert插入
//	L.insert(L.begin(), 1000);
//	PrintList(L);
//
//	//删除
//	list<int>::iterator it = L.begin();
//	L.erase(++it);
//	PrintList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	PrintList(L);
//	L.remove(10000);
//	PrintList(L);
//
//	//清空
//	L.clear();
//	PrintList(L);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}