#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//deque�Ĵ�С����  empty size resize  û��capacity

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
//	PrintDeque(d1);
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ:" << d1.size() << endl;
//	}
//
//	//����ָ����С
//	//d1.resize(15);
//	//d1.resize(15,1);
//	d1.resize(5);
//	PrintDeque(d1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}