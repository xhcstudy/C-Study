#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map��С�ͽ���
//size();		//����������Ԫ�ص���Ŀ
//empty();		//�ж������Ƿ�Ϊ��
//swap(st);		//����������������

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////��С
//void Test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ:" << m.size() << endl;
//	}
//}
//
////����
//void Test2()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//	cout << "����ǰ:" << endl;
//	PrintMap(m1);
//	PrintMap(m2);
//	m1.swap(m2);
//	cout << "������:" << endl;
//	PrintMap(m1);
//	PrintMap(m2);
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