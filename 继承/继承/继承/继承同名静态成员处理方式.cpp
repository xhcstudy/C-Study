#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�̳�ͬ����̬��Ա�Ĵ���ʽ
//��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��

//class Base
//{
//public:
//
//	static void Function()
//	{
//		cout << "Base��Function()��������" << endl;
//	}
//
//	static void Function(int a)
//	{
//		cout << "Base��Function(int)��������" << endl;
//	}
//
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static void Function()
//	{
//		cout << "Son��Function()��������" << endl;
//	}
//
//	static int m_A;
//};
//int Son::m_A = 200;
//
//void Test1()
//{
//	//1.ͨ���������
//	Son s;
//	cout << "Son�µ�m_A = " << s.m_A << endl;
//	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
//	s.Function();
//	s.Base::Function();
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�����������ص�����������ͬ����Ա������������
//	//s.Function(10);
//	s.Base::Function(10);
//
//	//ͨ��������ʽ����
//	cout << "Son�µ�m_A = " << Son::m_A << endl;
//	cout << "Base�µ�m_A = " << Son::Base::m_A << endl;
//	Son::Function();
//	Son::Base::Function();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}