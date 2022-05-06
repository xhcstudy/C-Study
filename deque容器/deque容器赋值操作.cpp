#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//dequeÈÝÆ÷¸³Öµ²Ù×÷

//void PrintDeque(deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	PrintDeque(d1);
//	
//	//operator=
//	deque<int> d2 = d1;
//	PrintDeque(d2);
//
//	//assign
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	PrintDeque(d3);
//
//	deque<int> d4;
//	d4.assign(10, 100);
//	PrintDeque(d4);
//
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}