#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <map>

//map�Ļ�������
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey(��ֵ),���������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

//����:map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�

//�ŵ�:���Ը��ݼ�ֵ�����ҵ�valueֵ

//map��multimap����
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��

//����
//map<T1, T2> mp;					//mapĬ�Ϲ��캯��
//map(const map &mp);				//��������

//��ֵ
//map& operator=(const map &mp);	//operator=

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	//����map����
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	PrintMap(m);
//
//	//��������
//	map<int, int>m2(m);
//	PrintMap(m2);
//
//	//��ֵ
//	map<int, int>m3;
//	m3 = m2;
//	PrintMap(m3);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}