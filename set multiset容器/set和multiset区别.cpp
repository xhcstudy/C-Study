#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set��multiset������
//set�����Բ����ظ����ݣ���multiset����   
//��Ϊset����֮��᷵��һ���������һ����������һ��bool���͵�ֵ  ��multiset �����ж�  ���Կ����ظ���������
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset���������ݣ���˿��Բ����ظ�����

//void Test1()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
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