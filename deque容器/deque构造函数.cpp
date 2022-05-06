#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//deque双端数组
//相比vector容器对头部的插入和删除数据速度比vector快(因为要挪动数据,而deque不用挪动数据)
//但是vector访问元素时的速度会比deque快，这和两者的内部实现有关
//deque内部有一个中控器(数组指针数组)，维护每段缓冲区的内容，缓冲区中存放真实的数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
//deque容器的迭代器也是支持随机访问的


//deque容器的构造函数
//dequer<T> deqT;			//默认构造形式
//deque(beg, end);			//构造函数将[beg,end)区间中的元素拷贝给本身
//deque(n, elem);			//构造函数将n个elem拷贝给本身
//deque(const deque &deq);	//拷贝构造函数

//void PrintDeque(deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;   容器中的数据现在不可以修改了  const_iterator 只读迭代器
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	PrintDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	PrintDeque(d2);
//
//	deque<int> d3(10, 100);
//	PrintDeque(d3);
//
//	deque<int> d4(d3);
//	PrintDeque(d4);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}