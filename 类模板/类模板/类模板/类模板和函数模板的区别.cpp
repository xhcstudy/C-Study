#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//��ģ��ͺ���ģ�������
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
//template <class NameType, class AgeType = int>
//class Person
//{
//public:
	//Person(NameType name, AgeType age)
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
//
//	void ShowPerson()
//	{
//		cout << "����: " << this->m_Name << endl
//			<< "����: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test1()
//{
//	//Person p("�����", 1000); �����޷����Զ������Ƶ�
//	Person<string, int> p("�����", 1000); //��ȷ	ֻ������ʾָ������
//	p.ShowPerson();
//}
//
//void Test2()
//{
//	Person<string> p("��˽�", 999);
//	p.ShowPerson();
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