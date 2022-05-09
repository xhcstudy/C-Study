#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//copy(iterator beg, iterator end, iterator dest);   另外一个容器要提前准备好空间

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
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	v2.resize(v1.size());
//
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), Print());
//	cout << endl;
//}
//
//int main()
//{
//	Test1();
//	system("pause");
//	return 0;
//}