#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set�����Ļ�������
//����Ԫ�ض����ڲ���ʱ�Զ�����ֵ
//����:set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�

//set��multiset����:
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��

//set����͸�ֵ
//set<T> st;						//Ĭ�Ϲ���
//set(const set &st);				//��������

//set& operator=(const set &st); //���صȺŲ�����
//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void Test1()
//{
//	set<int> s1;
//
//	//��������  ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(20);
//	
//	PrintSet(s1);
//	//10 20 30 40 �����ʱ��ͻ��Զ���������,���Ҳ���������ظ�Ԫ�� ����ֻ��һ��20
//
//	//��������
//	set<int> s2(s1);
//	PrintSet(s1);
//
//	//��ֵ
//	set<int> s3;
//	s3 = s2;
//	PrintSet(s1);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}