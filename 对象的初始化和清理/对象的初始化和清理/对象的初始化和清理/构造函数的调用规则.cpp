#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//���캯���ĵ��ù���
//1.����һ���࣬C++���������ÿ���඼���������������
//Ĭ�Ϲ��캯�� (��ʵ��)
//�������� (��ʵ��)
//�������� (ֵ����)

//2.�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//��������ṩ�˿������캯�����������Ͳ����ṩ��ͨ�Ĺ��캯��

class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}

	//Person(int age)
	//{
	//	m_Age = age;
	//	cout << "Person���вι��캯������" << endl;
	//}

	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//void Test1()
//{
//	Person p;
//	p.m_Age = 18;
//	
//	Person p2(p);
//
//	cout << "p2������Ϊ:" << p2.m_Age << endl;
//
//}

//void Test2()
//{
//	//Person p; �ṩ���в����Ĺ��캯�����������Ͳ����ṩĬ�ϵĹ��캯�������Դ���Person p�ᱨ��û�к��ʵ�Ĭ�Ϲ��캯������
//	Person p(18);
//
//	Person p2(p);
//	cout << "p2������Ϊ:" << p2.m_Age << endl;
//}

//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}