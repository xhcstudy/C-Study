#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list��ת������
//reverse();		//��ת����
//sort();			//��������

//void PrintList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool MyCompare(int v1, int v2)
//{
//	//����  ���õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
//
//void Test1()
//{
//	//��ת
//	list < int > L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	PrintList(L1);
//	L1.reverse();
//	PrintList(L1);
//
//	//����  -   ���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(), L1.end());
//	L1.sort();  //Ĭ����������
//	PrintList(L1);
//
//	L1.sort(MyCompare);  //���򷽷� �Լ��ṩһ������Ȼ�󴫺�����
//	PrintList(L1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}