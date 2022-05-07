#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//list数据存取	不支持随机访问  迭代器是双向迭代器
//front();	//返回第一个元素
//back();	//返回最后一个元素

//void Test1()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//不支持[]和at方式访问list容器中的元素
//	//list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问
//
//	cout << "第一个元素为:" << L1.front() << endl;
//
//	cout << "最后一个元素为:" << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	//it = it + 3;   只能++ --操作  因为不支持随机访问 只能一个个走
//	it++;
//	it--;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}