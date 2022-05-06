#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//void PrintVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////vector容量和大小	empty  capacity  size  resize
//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	PrintVector(v1);
//
//	if (v1.empty()) //为真 代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为:" << v1.capacity() << endl;
//		cout << "v1的大小为:" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	//resize(int n);			重新指定的比原来长  默认用0填充新位置
//	//resize(int n, int elem);  重新指定的比原来长  默认用elem填充新位置
//	//v1.resize(15);
//	//v1.resize(15, 2);
//	v1.resize(5);				//如果重新指定的比原来短了，超出部分会删除掉
//	PrintVector(v1);
//} 
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}