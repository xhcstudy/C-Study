#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��������

//1.ֵ����
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.ַ����
void mySwap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
void mySwap3(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap1(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//mySwap2(&a, &b);
//	mySwap3(a, b);
//	cout << "a = " << a << "\tb = " << b << endl;
//	system("pause");
//	return 0;
//}