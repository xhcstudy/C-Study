#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

//1.��ͨ�������ÿ��Է�����ʽ����ת��

//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��

//3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template <typename T>
//int myAdd2(T a, T b)
//{
//	return a + b;
//}
//
//void Test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c'; // a - 97  c - 99
//	cout << myAdd1(a, c) << endl;
//
//	//�Զ������Ƶ�
//	cout << myAdd2(a, b) << endl;
//	//cout << myAdd2(a, c) << endl;   ���ܷ�����ʽת��
//	cout << myAdd2<int>(a, c) << endl;   //�ܷ�����ʽ����ת��
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}