#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>	//标准算法头文件

//deque排序  利用算法实现对deque容器进行排序
//算法: sort(iterator beg, iterator end)	//对beg和end区间内元素进行排序

void PrintDeque(deque<int> &d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Test1()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(40);
	d1.push_back(70);
	d1.push_back(50);
	d1.push_back(30);
	d1.push_back(60);

	//排序	默认规则	从小到大	升序
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	//vector容器也可以利用 sort 进行排序
	sort(d1.begin(), d1.end());
	PrintDeque(d1);
}

int main()
{
	Test1();

	system("pause");
	return 0;
}