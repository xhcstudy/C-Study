#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//�㷨ͷ�ļ���Ҫ�� algorithm  functional  numeric
//algorithm ������STLͷ�ļ�������һ������Χ�漰�Ƚϡ����������ҡ�������������ֵ���޸ĵȵ�
//numeric �����С��ֻ��������������������м���ѧ�����ģ�庯��
//functional ������һЩģ���࣬����������������

//���õı����㷨 
//for_each ��������
//transform ������������һ��������

//��ͨ����
//void Print1(int val)
//{
//	cout << val << " ";
//}
//
////�º���
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void Test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), Print1);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}