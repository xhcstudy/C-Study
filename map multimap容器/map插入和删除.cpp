#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map�����ɾ��
//insert(elem);		//�������в���Ԫ��
//clear();			//�������Ԫ��
//erase(pos);		//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg, end);  //ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(key);		//ɾ��������ֵΪkey��Ԫ�� ����key��ֵ��ɾ����value

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	map<int, int> m;
//
//	//����
//	//1.
//	m.insert(pair<int, int>(1, 10));
//
//	//2.
//	m.insert(make_pair(2, 20));
//
//	//3.
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//4.	������ʹ�����ַ�ʽ	���׳�������	[]��;����������key���ʵ�key
//	m[4] = 40;
//	//cout << m[5] << endl;  //���û�м�ֵΪ5��Ԫ�أ����Զ����㴴��һ����ֵΪ5ֵΪĬ��ֵ��Ԫ��
//
//	PrintMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	PrintMap(m);
//
//	m.erase(30);
//	PrintMap(m);
//
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	PrintMap(m);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}