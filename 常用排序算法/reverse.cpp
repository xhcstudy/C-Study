#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//reverse(iterator beg, iterator end);	��תָ����Χ��Ԫ��

class MyPrint
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
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ:" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	cout << "��ת��:" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}