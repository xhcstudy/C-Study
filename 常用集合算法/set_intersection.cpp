#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//set_intersection(interator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//求两个集合的交集		两个集合必须是有序序列
//目标容器需要开辟的空间必须是两个容器中取小值
//返回值是交集最后一个元素的位置

//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void Test1()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//目标容器需要提前开辟空间
//
//	int lesssize = v1.size();
//	if (v1.size() > v2.size())
//	{
//		lesssize = v2.size();
//	}
//	vTarget.resize(lesssize);
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, Print());
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