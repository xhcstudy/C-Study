#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//��Ա��������Ϊ˽��
//�ŵ�1:�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2:����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

//�������
class Person
{
public:
	//д����
	void SetName(string name)
	{
		m_Name = name;
	}

	//������
	string GetName()
	{
		return m_Name;
	}

	//��ȡ����  
	int GetAge()
	{
		if (flag)
		{
			return 0;
		}
		//m_Age = 0;//��ʼ��Ϊ0��
		return m_Age;
	}

	//��������
	void SetAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "������������" << endl;
			flag = 1;
		}
		m_Age = age;
	}

	//��������  ֻд
	void SetLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//����  �ɶ���д
	string m_Name;
	
	//����  �ɶ���д ������޸����䣨������0~150֮�䣩
	int m_Age;

	//����  ֻд
	string m_Lover;

	int flag = 0;
};

//int main()
//{
//	Person p;
//	p.SetName("����");
//
//	cout << "����:" << p.GetName() << endl;
//
//	//p.m_Age = 18;
//	//p.SetAge(18);
//
//	p.SetAge(1000);
//	cout << "����:" << p.GetAge() << "��" << endl;
//
//	//��������Ϊ�Ծ�Ůʿ
//	p.SetLover("�Ծ�");
//	//cout << "����:" << p.SetLover() << endl;
//
//	system("pause");
//	return 0;
//}