#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//STL��list��һ��˫��ѭ������

//list���캯��
//list<T> lst;			//Ĭ�Ϲ���
//list(beg, end);		//���캯����[beg,end)�����е�Ԫ�ؿ���������
//list(n, elem);		//���캯����n��elem����������
//list(const list &lis);//��������

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
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	//���䷽ʽ����
//	list<int> L2(L1.begin(), L1.end());
//	PrintList(L2);
//
//	//��������
//	list<int> L3(L2);
//	PrintList(L3);
//
//	//n��elem
//	list<int> L4(10, 1000);
//	PrintList(L4);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}