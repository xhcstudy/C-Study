#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��̳��﷨
//�﷨: class ���� : �̳з�ʽ ����1�� �̳з�ʽ ����2...
//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
//C++ʵ�ʿ����в������ö�̳�

//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////����  ��Ҫ�̳�Base1��Base2
//class Son : public Base1, public Base2
//{
//public:
//
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void Test1()
//{
//	Son s;
//	cout << "sizeof Son:" << sizeof(s) << endl;
//	//�������г���ͬ����Ա����Ҫ������������
//	cout << "Base1�µ�m_A = " << s.Base1::m_A << endl;
//	cout << "Base2�µ�m_A = " << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}