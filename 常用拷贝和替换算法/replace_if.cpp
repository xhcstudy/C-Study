#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//replace_if(iterator beg, iterator end, _pred, newvalue);

//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater5
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void Test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "Ìæ»»Ç°:" << endl;
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	cout << "Ìæ»»ºó:" << endl;
//	replace_if(v.begin(), v.end(), Greater5(), 100);
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