#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//�����ǳ����
//ǳ����:�򵥵ĸ�ֵ����
//���:�ڶ�����������ռ䣬���п�������

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//
//	//�Լ�ʵ�ֿ������캯�������ǳ��������������
//	Person(const Person &p)
//	{
//		m_Height = new int(*p.m_Height);
//		m_Age = p.m_Age;
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	~Person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//
//	int m_Age;//����
//	int* m_Height;//���
//};
//
////����ͷ�ͬһ���ռ䣬���� 
////��Ϊû���Լ����쿽������������ϵͳĬ�ϵĿ�����������ǳ�����������Ὣp1�� int* m_Height������ Ҳ���Ǵ洢160�ĵ�ַ��ֵ�� p2��int* m_Height
////������Test1����֮�󣬻��ͷ�ջ�ϵ�p2 Ȼ���ͷ�p1 Ȼ��ÿ���ͷŶ��󶼻�������е��������� ����p1�е�m_Height��p2�е�m_Height������ͬһ��ռ�
////�ͷ�p2 Ȼ���ͷ�p1���ͬһ��ռ����ͷ�
//void Test1()
//{
//	Person p1(18,160);
//
//	cout << "p1������Ϊ:" << p1.m_Age << "\n���Ϊ:"<< *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2������Ϊ:" << p2.m_Age << "\n���Ϊ:" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}