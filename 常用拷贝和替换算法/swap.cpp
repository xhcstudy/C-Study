#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//swap(container c1, container c2);  ��������������Ԫ��

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
		v2.push_back(i + 10);
	}
	v2.push_back(20);
	cout << "����ǰ:" << endl;
	cout << "v1����:" << endl;
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	cout << "v2����:" << endl;
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;

	cout << "������:" << endl;
	swap(v1, v2);
	cout << "v1����:" << endl;
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	cout << "v2����:" << endl;
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}