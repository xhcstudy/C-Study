#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator des); 
//�����������ϲ�������һ��������		iterator des ������һ����������ʼ������

//class MyPrint
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
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	//Ŀ������
//	vector<int> vTarget;
//	vTarget.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
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