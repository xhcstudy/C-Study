#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vector��������   ��������swapʵ���ڴ�����
//swap(vec);		//��vec�뱾���Ԫ�ػ���

//void PrintVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////1������ʹ��
//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "����ǰ��" << endl;
//	PrintVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//
//	PrintVector(v2);
//
//	cout << "������" << endl;
//	v1.swap(v2);
//	PrintVector(v1);
//	PrintVector(v2);
//}
//
////2��ʵ����;
////����swap���������ڴ�ռ�
//void Test2()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//
//	//����swap�����ڴ�
//	vector<int>(v).swap(v); //vector<int>(v)��������  ���н���֮��������Զ�����   ����ʵ���������Ľ������������������д���������֮��ͱ��ͷ�
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//	
//}

//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}