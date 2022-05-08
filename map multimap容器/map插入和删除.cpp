#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map插入和删除
//insert(elem);		//在容器中插入元素
//clear();			//清除所有元素
//erase(pos);		//删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg, end);  //删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//erase(key);		//删除容器中值为key的元素 按照key键值来删不是value

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	map<int, int> m;
//
//	//插入
//	//1.
//	m.insert(pair<int, int>(1, 10));
//
//	//2.
//	m.insert(make_pair(2, 20));
//
//	//3.
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//4.	不建议使用这种方式	容易出现问题	[]用途：可以利用key访问到key
//	m[4] = 40;
//	//cout << m[5] << endl;  //如果没有键值为5的元素，会自动给你创建一个键值为5值为默认值的元素
//
//	PrintMap(m);
//
//	//删除
//	m.erase(m.begin());
//	PrintMap(m);
//
//	m.erase(30);
//	PrintMap(m);
//
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	PrintMap(m);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}