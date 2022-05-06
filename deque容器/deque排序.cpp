#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>	//��׼�㷨ͷ�ļ�

//deque����  �����㷨ʵ�ֶ�deque������������
//�㷨: sort(iterator beg, iterator end)	//��beg��end������Ԫ�ؽ�������

void PrintDeque(deque<int> &d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Test1()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(40);
	d1.push_back(70);
	d1.push_back(50);
	d1.push_back(30);
	d1.push_back(60);

	//����	Ĭ�Ϲ���	��С����	����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ�������� sort ��������
	sort(d1.begin(), d1.end());
	PrintDeque(d1);
}

int main()
{
	Test1();

	system("pause");
	return 0;
}