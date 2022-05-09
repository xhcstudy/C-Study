#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//sort(iterator beg, iterator end, _Pred);		第三个参数不填默认是升序   可以通过第三个参数改变排序规则

//class Print
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//
//void Test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//利用sort升序排列
//	sort(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	//改变为降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Print());
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