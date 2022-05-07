#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list反转和排序
//reverse();		//反转链表
//sort();			//链表排序

//void PrintList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool MyCompare(int v1, int v2)
//{
//	//降序  就让第一个数大于第二个数
//	return v1 > v2;
//}
//
//void Test1()
//{
//	//反转
//	list < int > L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	PrintList(L1);
//	L1.reverse();
//	PrintList(L1);
//
//	//排序  -   所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//	//sort(L1.begin(), L1.end());
//	L1.sort();  //默认排序升序
//	PrintList(L1);
//
//	L1.sort(MyCompare);  //降序方法 自己提供一个函数然后传函数名
//	PrintList(L1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}