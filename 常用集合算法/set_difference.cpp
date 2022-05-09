#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//求两个集合的差集
//两个集合必须是有序序列

class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void Test1()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	vTarget.resize(max(v1.size(),v2.size()));

	cout << "v1和v2的差集为:" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, Print());
	cout << endl;

	cout << "v2和v1的差集为:" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, Print());
	cout << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}