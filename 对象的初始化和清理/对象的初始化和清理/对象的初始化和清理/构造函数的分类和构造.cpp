#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//1.���캯���ĵ��úͷ���
//����
// ���ղ�������: �޲ι���(Ĭ�Ϲ���) �� �вι���
// �������ͷ���: ��ͨ���� �� ��������
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		m_Age = a;
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person &p)
//	{
//		//������������ϵ��������ԣ�������������
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ������캯���ĵ���" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person�����������ĵ���" << endl;
//	}
//	
//	int m_Age;
//};

//����
//void Test1()
//{
//	//1.���ŷ�
//	//Person p1;		//Ĭ�Ϲ��캯���ĵ���
//	//Person p2(10);	//�вι��캯��
//	//Person p3(p2);	//�������캯��
//
//	//ע������1
//	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//	//��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
//	//Person p1();
//	//void Function();
//
//	//cout << "p2������Ϊ:" << p2.m_Age << endl;
//	//cout << "p3������Ϊ:" << p3.m_Age << endl;
//
//	//2.��ʾ��
//	//Person p1;
//	//Person p2 = Person(10); //�вι���
//	//Person p3 = Person(p2); //��������
//
//	//Person(10);				//�������� �ص�:��ǰ��ִ�н�����ϵͳ�����̻��յ���������
//	//cout << "aaaa" << endl;
//
//	//ע������2
//	//��Ҫ���ÿ������캯�� ��ʼ����������  ����������Ϊ Person(p3) �ȼ��� Person p3 ��Ϊ�൱�����ÿ�������һ��p3   �ض���  �൱��һ�����������
//	//Person(p3);
//
//	//3.��ʽת����
//	Person p4 = 10; //�൱��д��Person p4 = Person(10);
//	Person p5 = p4; //��������
//
//}

//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}