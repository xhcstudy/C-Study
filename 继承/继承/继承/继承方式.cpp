#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�̳з�ʽ

//�����̳�

//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//	void Function()
//	{
//		m_A = 10; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		m_B = 10; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10; // �����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//};
//
//void Test1()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100; //��Son1�� m_B�Ǳ���Ȩ�ޣ�������ʲ���
//}
//
////�����̳�
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 : protected Base2
//{
//public:
//	void Function()
//	{
//		m_A = 10; // �����еĹ���Ȩ�޳�Ա �������б�Ϊ�˱���Ȩ��
//		m_B = 10; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10; // �����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//};
//
//void Test2()
//{
//	Son2 s2;
//	//s2.m_A = 100; //��Son2�� m_A��Ϊ�˱���Ȩ�ޣ�������ʲ���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//public:
//	void Function()
//	{
//		m_A = 10; // �����еĹ���Ȩ�޳�Ա �������б�Ϊ��˽��Ȩ��
//		m_B = 10; // �����еı���Ȩ�޳�Ա �������б�Ϊ��˽��Ȩ��
//		//m_C = 10; // �����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//};
//
//class Grandson3 : public: Son3
//{
//public:
//	void Function()
//	{
//		//m_A = 10; //˵������Son3�� m_A��Ϊ��˽��
//		//m_B = 10; //˵������Son3�� m_A��Ϊ��˽��
//		//m_C = 10; 
//	}
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