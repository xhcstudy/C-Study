#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//C++���������������:��װ���̳С���̬

//��װ��C++���������������֮һ
//��װ������:
//�����Ժ���Ϊ��Ϊһ�����壬���������е�����
//�����Ժ���Ϊ����Ȩ�޿���

//Բ����
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ���ʽ:2*PI*�뾶

//class �������һ���࣬���������ŵľ����������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
	//����Ȩ��
public:
	//���е����Ժ���Ϊ ͳһ��Ϊ��Ա
	//����  ��Ա���� ��Ա����
	//��Ϊ  ��Ա���� ��Ա����


	//����
	string m_Name;
	int m_id;

	//��Ϊ
	void ShowInformation()
	{
		cout << "����:" << m_Name << endl;
		cout << "ѧ��:" << m_id << endl;
	}

	//��������ֵ
	void SetName(string name)
	{
		m_Name = name;
	}

	//��ѧ�Ÿ�ֵ
	void SetId(int id)
	{
		m_id = id;
	}
};

//int main()
//{
//	//ͨ��Բ�࣬����һ�������Բ(����)
//	//ʵ����  (ͨ��һ���࣬����һ������Ĺ���)
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//	
//	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;
//
//	//���ѧ����
//	Student s1;
//	//s1.m_id = 20193060;
//	//s1.m_Name = "Ф�ƴ�";
//	s1.SetName("Ф�ƴ�");
//	s1.SetId(20193060);
//	s1.ShowInformation();
//	Student s2;
//
//
//	system("pause");
//	return 0;
//}