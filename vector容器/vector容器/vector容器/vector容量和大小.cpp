#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//void PrintVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////vector�����ʹ�С	empty  capacity  size  resize
//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	PrintVector(v1);
//
//	if (v1.empty()) //Ϊ�� ��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ:" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ:" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	//resize(int n);			����ָ���ı�ԭ����  Ĭ����0�����λ��
//	//resize(int n, int elem);  ����ָ���ı�ԭ����  Ĭ����elem�����λ��
//	//v1.resize(15);
//	//v1.resize(15, 2);
//	v1.resize(5);				//�������ָ���ı�ԭ�����ˣ��������ֻ�ɾ����
//	PrintVector(v1);
//} 
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}