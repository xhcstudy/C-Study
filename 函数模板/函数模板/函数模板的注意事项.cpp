#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//����ģ���ע������

//template <class T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1. �Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T�ſ���ʹ��
//void Test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//mySwap(a, b); //��ȷ
//	//mySwap(a, c); //����  �Ƶ�����һ�µ�T����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2. ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template <class T>
//void Function()
//{
//	cout << "Function()����" << endl;
//}
//
//void Test2()
//{
//	Function<void>();
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