#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//list大小操作
//size();				//返回容器中元素的个数
//empty();			//判断容器是否为空
//resize(num);		//重新指定容器长度，如果容器变长，用默认值填充变长的位置数据
//resize(num, elem);	//重新指定容器长度，如果容器变长，用elem填充变长的位置数据

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
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	//判断容器为空
//	if ( L1.empty() )
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器的大小为:" << L1.size() << endl;
//	}
//
//	//resize
//	//L1.resize(5);
//	//L1.resize(2);
//	L1.resize(10, 100);
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