#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//���μ̳�

//������

class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳�����
//�ڼ̳з�ʽǰ����� virtual�ؼ��� ��Ϊ��̳�
//Animal���Ϊ �����
//����
class Sheep : virtual public Animal
{

};

//����
class Camel : virtual public Animal
{

};

//������
class Alpaca : public Sheep, public Camel
{

};

void Test1()
{
	Alpaca ap;
	ap.Sheep::m_Age = 22;
	ap.Camel::m_Age = 21;
	//�����μ̳У�����������ӵ����ͬ���ԣ���Ҫ��������������
	cout << "ap.Sheep::m_Age =" << ap.Sheep::m_Age << endl;
	cout << "ap.Camel::m_Age =" << ap.Camel::m_Age << endl;
	cout << "ap.m_Age = " << ap.m_Age << endl;

	//�����������֪�� ֻҪ��һ�ݾͿ�����,���μ̳е������������ݣ���Դ�˷�
}

int main()
{
	Test1();

	system("pause");
	return 0;
}