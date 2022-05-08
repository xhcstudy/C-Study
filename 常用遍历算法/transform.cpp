#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//transform(iterator beg1, iterator end1, iterator beg2, _func);

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};

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
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget; //Ŀ������
	vTarget.resize(v.size()); //Ŀ��������Ҫ��ǰ���ٿռ�

	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	for_each(vTarget.begin(), vTarget.end(), Print());
	cout << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}