#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��������
//C++�к�����������ͬ����ߺ������ĸ�����
//�����������������:
//ͬһ����������
//����������ͬ
//������   �������� ��ͬ    ���߸��� ��ͬ    ����˳�� ��ͬ
//ע��:�����ķ���ֵ��������Ϊ�������ص�����

void Function()
{
	cout << "Funtion�ĵ���" << endl;
}

void Function(int)
{
	cout << "Function(int)�ĵ���!" << endl;
}

void Function(double a)
{
	cout << "Function(double)�ĵ���!" << endl;
}

void Function(double a, int b)
{
	cout << "Function(double a, int b)�ĵ���!" << endl;
}

void Function(int a, double b)
{
	cout << "Function(int a, double b)�ĵ���!" << endl;
}

//int main()
//{
//	Function();
//	Function(10);
//	Function(3.14);
//	Function(10, 3.14);
//	Function(3.14, 10);
//
//	system("pause");
//	return 0;
//}