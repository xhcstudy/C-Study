#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//����Ĭ���� - ��������ô���ȥ�Ĳ��������û��ʹ��Ĭ��ֵ

int Function(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int Function2(int a, int b, int c = 10, int d)
//{
//	return a + b + c;
//}

//2.�����������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ�����
//int Function3(int a, int b = 10, int c = 10);
//
//int Function3(int a, int b = 10, int c = 10)
//{
//	return a + b + c;
//}

//int main()
//{
//	cout << Function(10, 20, 30) << endl;
//	cout << Function(10) << endl;
//	cout << Function(10, 30) << endl;
//
//	//cout << Function3(10, 20, 30) << endl;
//
//	system("pause");
//	return 0;
//}