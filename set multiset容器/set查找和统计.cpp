#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <set>

//set���Һ�ͳ��
//find(key);		//����key�Ƿ���ڣ������ڣ����ظ�Ԫ�صĵ�������������ڣ�����set.end();
//count(key);		//ͳ��key��Ԫ�ظ���    ����0����1����Ϊset�����������ظ�Ԫ��

//void Test1()
//{
//	//����
//	set<int> s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(300);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ��:" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}
//
////ͳ��
//void Test2()
//{
//	set<int> s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//ͳ��30�ĸ���
//	int num = s1.count(30);
//	//����set���� ͳ�ƽ�� Ҫô��0 Ҫô��1
//	cout << "num = " << num << endl;
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