#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>
#include <string>

//fill(iterator beg, iterator end, value);  value Ҫ����ֵ
//�ײ���һ��forѭ�� �õ������� *first = value Ȼ�� ������������
//��������ֽڸ�Ϊvalue

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
	v.resize(10); // 10��0

	//�����������
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