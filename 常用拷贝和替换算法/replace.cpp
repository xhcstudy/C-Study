#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//replace(iterator beg, iterator end, oldvalue, newvalue);	�������ھ�Ԫ�� �滻����Ԫ��

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
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ:" << endl;
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	cout << "�滻��:" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	 
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}