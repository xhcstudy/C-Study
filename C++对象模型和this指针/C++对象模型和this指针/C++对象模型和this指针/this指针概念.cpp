#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ����� �����õĳ�Ա���� �����Ķ��� 
//		this->age = age;
//	}
//
//	//ΪʲôҪ��Person& ������ ���������& ÿ�η���֮���൱�����´���һ��p2 thisָ���������Ȼһֱ�ٸı䣬����p2�����ݲ���ı�
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//
//		//this��ָ�򱻵��ú�����Ա�����Ķ���  *this������������Ķ���
//		return *this;
//	}
//
//	int age;
//};

//1.������Ƴ�ͻ

//void Test1()
//{
//	Person p1(18);
//
//	cout << "p1������Ϊ:" << p1.age << endl;
//}

//2.���ض�������*this

//void Test2()
//{
//	Person p1(10);
//	Person p2(20);
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2������Ϊ:" << p2.age << endl;
//
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}