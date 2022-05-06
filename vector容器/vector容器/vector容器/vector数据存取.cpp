#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vector数据存储
//at(int index);		//返回索引index所指的数据
//operator[];			//返回索引index所指的数据
//front();				//返回容器中第一个数据元素
//back();				//返回容器中最后一个数据元素

//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//at()
//	cout << v1.at(2) << endl;
//
//	//operator[]
//	cout << v1[3] << endl;
//
//	//front()
//	cout << v1.front() << endl;
//
//	//back()
//	cout << v1.back() << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}