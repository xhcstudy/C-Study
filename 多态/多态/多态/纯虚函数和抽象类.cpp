#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//���麯���ͳ�����
//class Base
//{
//public:
//
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص�:
//	//1. �޷�ʵ��������
//	//2. ��������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void Function() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void Function()
//	{
//		cout << "Function��������" << endl;
//	}
//};
//
//void Test1()
//{
//	//Base b;  ���������޷�ʵ��������  ��ջ�ϺͶ���һ��
//	//new Base;
//	//Son s;    ��������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	//new Son;
//	//Son s;
//	Base* base = new Son;
//	base->Function();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}