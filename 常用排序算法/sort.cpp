#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//sort(iterator beg, iterator end, _Pred);		��������������Ĭ��������   ����ͨ�������������ı��������

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
//	//����sort��������
//	sort(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	//�ı�Ϊ����
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