#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//reverse(iterator beg, iterator end);	反转指定范围的元素

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

	cout << "反转前:" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	cout << "反转后:" << endl;
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