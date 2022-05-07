#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set容器排序  默认排序规则为升序
//利用仿函数可以改变排序规则

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void Test()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//	for (set<int>::const_iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则为从大到小
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//
//	for (set<int, MyCompare>::const_iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Test();
//
//	system("pause");
//	return 0;
//}