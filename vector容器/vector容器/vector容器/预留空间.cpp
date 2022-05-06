#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vector预留空间 - 减少vector在动态扩展容量时的扩展次数
//reserve(int len);		//容器预留len个元素长度，预留位置不初始化，元素不可访问

void Test1()
{
	vector<int> v;
	v.reserve(100000);
	int count = 0;  //统计开辟了多少次内存
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			count++;
		}
	}

	cout << count << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}