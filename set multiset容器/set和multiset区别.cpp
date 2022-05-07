#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set和multiset的区别
//set不可以插入重复数据，而multiset可以   
//因为set插入之后会返回一个对组包含一个迭代器和一个bool类型的值  而multiset 不会判断  所以可以重复插入数据
//set插入数据的同时会返回插入结果，表示插入是否成功
//multiset不会检测数据，因此可以插入重复数据

//void Test1()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}