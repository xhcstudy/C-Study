#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��������������ֵ
//1.��Ҫ���ؾֲ�����������
int& Test1()
{
	int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& Test2()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}

//int main()
//{
//	//int& ref = Test1();
//	//cout << "ref = " << ref << endl;
//	//cout << "ref = " << ref << endl;
//
//	int& ref2 = Test2();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	Test2() = 100;
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	system("pause");
//	return 0;
//}