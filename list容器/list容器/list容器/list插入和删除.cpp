#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//֮ǰ������ʽ���Ѿ����Թ�  
//remove(elem);  ɾ��������������elemֵƥ���Ԫ��

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
//	list<int> L;
//
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	PrintList(L);
//
//	//βɾ
//	L.pop_back();
//	PrintList(L);
//
//	//ͷɾ
//	L.pop_front();
//	PrintList(L);
//
//	//insert����
//	L.insert(L.begin(), 1000);
//	PrintList(L);
//
//	//ɾ��
//	list<int>::iterator it = L.begin();
//	L.erase(++it);
//	PrintList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	PrintList(L);
//	L.remove(10000);
//	PrintList(L);
//
//	//���
//	L.clear();
//	PrintList(L);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}