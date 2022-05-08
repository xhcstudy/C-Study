#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>
#include <string>

//map����
//map��������Ԫ��ʱ�ͻᰴ��keyֵ���д�С������������������Ҫ�ı����������Ҫ�õ��º������ڲ����ʱ��͸ı����

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void PrintMap(const map<int, int, MyCompare> &m)
{
	for (map<int, int, MyCompare>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
	}
	cout << endl;
}

void Test1()
{
	map<int, int, MyCompare> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 10));
	m.insert(make_pair(3, 10));
	m.insert(make_pair(4, 10));
	m.insert(make_pair(5, 10));
	PrintMap(m);
}

int main()
{
	Test1();

	system("pause");
	return 0;
}