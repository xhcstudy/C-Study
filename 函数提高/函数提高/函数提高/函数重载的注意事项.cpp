#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�����
void Function(int &a)
{
	cout << "Function(int &a)�ĵ���" << endl;
}

void Function(const int &a)
{
	cout << "Function(const int &a)�ĵ���" << endl;
}

//2.������������Ĭ�ϲ���
void Function2(int a)
{
	cout << "Function2(int a)�ĵ���" << endl;
}

void Function2(int a, int b = 10)
{
	cout << "Function2(int a, int b = 10)�ĵ���" << endl;
}

int main()
{
	int a = 10;
	Function(a);
	Function(10);// ����const int &a  �൱�� int temp = 10; int &a = temp;

	//Function2(10); ��������������Ĭ�ϲ��������ֶ����ԣ��������������������

	system("pause");
	return 0;
}