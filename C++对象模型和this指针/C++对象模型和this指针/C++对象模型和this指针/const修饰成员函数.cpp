#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//������
class Person
{
public:

	//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//thisָ����ʵ����:Person* const this
	//��������ʵ���ǽ�thisָ���һ������ ʹ�ó������ڲ������޸ĳ�Ա����
	//����Ϊ const Person* const this
	void ShowPerson() const
	{
		//this->m_A = 100;
		//this = NULL; //thisָ�벻�����޸�ָ���ָ��
		m_B = 100;
	}

	void Function()
	{

	}

	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};

void Test1()
{
	Person p;
	p.ShowPerson();
}

//������

void Test2()
{
	const Person p;//�ڶ���ǰ����const����Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//m_B��һ������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	//p.Function(); //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

}

int main()
{
	Test1();

	system("pause");
	return 0;
}