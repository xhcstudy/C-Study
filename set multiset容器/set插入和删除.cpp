#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set�������в������ݺ�ɾ������
//insert(elem);		//�������в���Ԫ��
//clear();			//�������Ԫ��
//erase(pos);		//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg, end);  //ɾ������[beg, end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(elem);		//ɾ��������ֵΪelem��Ԫ��

//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	set<int> s1;
//
//	//����
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	PrintSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());  //�൱��ɾ����С������
//	PrintSet(s1);
//
//	//��Ҫɾ����Ҫɾ��������  ֱ�������ذ汾������Ҫɾ��������
//	s1.erase(30);
//	PrintSet(s1);
//
//	//���
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
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