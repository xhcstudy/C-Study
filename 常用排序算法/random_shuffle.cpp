#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>

//random_shuffle(iterator beg, iterator end);		//洗牌 对范围内数据随机调整顺序

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
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	random_shuffle(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	Test1();
//
//	system("pause");
//	return 0;
//}