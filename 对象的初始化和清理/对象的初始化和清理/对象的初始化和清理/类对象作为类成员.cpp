#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա

//����Phone Ȼ����Person  
//������Person ������Phone  ��Ϊ�ڶ���ջ�ϴ洢  �Ƚ����
class Phone
{
public:

	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}

	//�ֻ���Ʒ������
	string m_PName;
};

class Person
{
public:

	//Phone m_Phone = pName ��ʽת����
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	string m_Name;//����

	Phone m_Phone;//�ֻ�
};

void Test1()
{
	Person p("����","ƻ��MAX");
	
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;

}

int main()
{
	Test1();

	system("pause");
	return 0;
}