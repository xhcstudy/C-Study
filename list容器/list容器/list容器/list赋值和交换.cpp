#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//list��ֵ�ͽ���
//assign(beg, end);					//��[beg,end)�����е����ݿ�����ֵ������
//assign(n, elem);					//��n��elem������ֵ������
//list& operator=(const list &lst);	//���صȺŲ�����
//swap(lst);						//��lst�뱾���Ԫ�ػ�����

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
//	list < int > L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	PrintList(L1);
//
//	list<int> L2 = L1;  //operator=
//	PrintList(L2);
//
//	list<int> L3;
//	L3.assign(L2.begin(), L2.end());
//	PrintList(L3);
//
//	list<int> L4;
//	L4.assign(10, 1000);
//	PrintList(L4);
//}
//
//void Test2()
//{
//	//����
//	list < int > L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	list<int> L2;
//	L2.assign(10, 100);
//	L1.swap(L2);
//	PrintList(L1);
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