#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map���Һ�ͳ��
//find(key);		//����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key);		//ͳ��key��Ԫ�ظ���		map�����в���������ظ�key��Ԫ�أ���������ظ�key��Ԫ��ֻ�����һ��

//void Test1()
//{
//	//����
//	map<int, int> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(3, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "���ҵ��ˣ�value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "���Ҳ�����Ԫ��" << endl;
//	}
//
//	//ͳ��		���ҪôΪ0ҪôΪ1  multimap�Ͳ�����
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}