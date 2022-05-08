#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map查找和统计
//find(key);		//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key);		//统计key的元素个数		map容器中不允许插入重复key的元素，如果插入重复key的元素只会插入一个

//void Test1()
//{
//	//查找
//	map<int, int> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(3, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "查找到了，value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "查找不到该元素" << endl;
//	}
//
//	//统计		结果要么为0要么为1  multimap就不是了
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}