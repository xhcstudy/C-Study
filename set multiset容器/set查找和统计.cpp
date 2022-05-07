#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set查找和统计
//find(key);		//查找key是否存在，若存在，返回该元素的迭代器，如果不在，返回set.end();
//count(key);		//统计key的元素个数    返回0或者1，因为set容器不允许重复元素

//void Test1()
//{
//	//查找
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(300);
//	if (pos != s1.end())
//	{
//		cout << "找到元素:" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//}
//
////统计
//void Test2()
//{
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//统计30的个数
//	int num = s1.count(30);
//	//对于set而言 统计结果 要么是0 要么是1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}