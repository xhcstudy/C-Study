#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//���ݴ�ȡ
//at[index];		//��������index��ָ������
//operator[];		//��������index��ָ������
//front();			//���������е�һ������Ԫ��
//back();			//�������������һ��Ԫ��

//void Test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	//ͨ��[]��ʽ����Ԫ��
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ:" << d1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ:" << d1.back() << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}