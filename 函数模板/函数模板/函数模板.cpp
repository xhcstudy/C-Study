#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//����ģ��

//�������ν����ĺ���
//void SwapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������͵ĺ���
//void SwapDouble(double &a, double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
////����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
//template <typename T>  //typename �����滻��class
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void Test1()
//{
//	int a = 10;
//	int b = 20;
//	//SwapInt(a, b);
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//	//1.�Զ������Ƶ�
//	//mySwap(a, b);
//	//2.��ʾָ������
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	SwapDouble(c, d);
//
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}