#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set��С�ͽ���
//size();		//����������Ԫ�ص���Ŀ
//empty();	//�ж������Ƿ�Ϊ��
//swap(st);	//������������

//void PrintSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��С
//void Test1()
//{
//	set<int> s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//��ӡ����
//	PrintSet(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "�����Ĵ�СΪ:" << s1.size() << endl;
//	}
//}
//
////����
//void Test2()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int> s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "s1����ǰ:" << endl;
//	PrintSet(s1);
//
//	cout << "s1������:" << endl;
//	s1.swap(s2);
//	PrintSet(s1);
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}