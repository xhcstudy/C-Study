#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>
#include <string>

//fill(iterator beg, iterator end, value);  value 要填充的值
//底层是一个for循环 拿到迭代器 *first = value 然后 迭代器往后走
//将区间的字节改为value

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
	v.resize(10); // 10个0

	//后期重新填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), Print());
	cout << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}