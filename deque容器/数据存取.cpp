#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//数据存取
//at[index];		//返回索引index所指的数据
//operator[];		//返回索引index所指的数据
//front();			//返回容器中第一个数据元素
//back();			//返回容器中最后一个元素

//void Test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	//通过[]方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//通过at
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为:" << d1.front() << endl;
//	cout << "最后一个元素为:" << d1.back() << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}