#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set容器进行插入数据和删除数据
//insert(elem);		//在容器中插入元素
//clear();			//清除所有元素
//erase(pos);		//删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg, end);  //删除区间[beg, end)的所有元素，返回下一个元素的迭代器
//erase(elem);		//删除容器中值为elem的元素

//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	set<int> s1;
//
//	//插入
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//遍历
//	PrintSet(s1);
//
//	//删除
//	s1.erase(s1.begin());  //相当于删除最小的数字
//	PrintSet(s1);
//
//	//想要删除需要删除的数字  直接用重载版本传入想要删除的数据
//	s1.erase(30);
//	PrintSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	PrintSet(s1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}