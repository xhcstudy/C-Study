#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�̳���ͬ����Ա����
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void Function()
//	{
//		cout << "Base��Function��������" << endl;
//	}
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�����������ص�����������ͬ����Ա������������
//	void Function(int a)
//	{
//		cout << "Base��Function��int����������" << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void Function()
//	{
//		cout << "Son��Function��������" << endl;
//	}
//
//	int m_A;
//};
//
//
////ͬ���ĳ�Ա���Դ���
//void Test1()
//{
//	Son s;
//	cout << "Son  �µ�m_A = " << s.m_A << endl;
//	//���ͨ��������� ���ʵ������е�ͬ����Ա����Ҫ��������
//	cout << "Base �µ�m_A = " << s.Base::m_A << endl;
//}
//
////ͬ���ĳ�Ա��������
//void Test2()
//{
//	Son s;
//	//���������ûдFunciton ֱ�ӵ��û���ø����е�Function
//	//���������д��ͬ����Ա�������򲻼�������Ĭ�ϵ������ຯ��
//	//Ҫ����ø����еĺ�����Ҫ��������
//	//��Ա����Ҳ��һ��
//	//��Ϊ�������ڴ����������ʱ��Ĭ�ϰ��㴴��һ���������
//	s.Function();
//	s.Base::Function();
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�����������ص�����������ͬ����Ա������������
//	//s.Function(100);
//	s.Base::Function(100);
//}
//
//int main()
//{
//	Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}