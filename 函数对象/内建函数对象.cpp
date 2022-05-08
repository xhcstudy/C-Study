#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//STL�ڽ���һЩ�������� ��֮ǰ��Ҫ��ͷ�ļ� #include <functional>
//����: �����º���		��ϵ�º���		�߼��º���

//�����º���:
//����negate��һԪ���㣬�������Ƕ�Ԫ����

//negate һԪ�º��� ȡ��������

void Test1()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus   ��Ԫ�º��� �ӷ�����

void Test2()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

//��ϵ�º���
//���� greater

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void Test3()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//�߼��º���
//�߼��� logical_not

void Test4()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�����߼���  ������v ���˵� ����v2�� ��ִ��ȡ������
	vector<bool> v2;
	v2.resize(v.size());
	
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	Test4();

	system("pause");
	return 0;
}