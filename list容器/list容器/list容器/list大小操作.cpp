#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//list��С����
//size();				//����������Ԫ�صĸ���
//empty();			//�ж������Ƿ�Ϊ��
//resize(num);		//����ָ���������ȣ���������䳤����Ĭ��ֵ���䳤��λ������
//resize(num, elem);	//����ָ���������ȣ���������䳤����elem���䳤��λ������

//void PrintList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	//�ж�����Ϊ��
//	if ( L1.empty() )
//	{
//		cout << "����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "�����Ĵ�СΪ:" << L1.size() << endl;
//	}
//
//	//resize
//	//L1.resize(5);
//	//L1.resize(2);
//	L1.resize(10, 100);
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