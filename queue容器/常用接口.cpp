#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <queue>
#include <string>

//queue��һ���Ƚ��ȳ������ݽṹ,��β������ͷ��
//ֻ�ж�ͷ�Ͷ�β�ᱻ���ʹ�ã��������б�����Ϊ

//���캯��	
//queue<T> que;							//����ģ����ʵ�֣�Ĭ�Ϲ�����ʽ
//queue(const queue &que);				//��������

//��ֵ����
//queue& operator=(const queue &que);	//���صȺ������

//���ݴ�ȡ
//push(elem);							//��β���Ԫ��
//pop();								//��ͷ�Ƴ���һ��Ԫ��
//back();								//�������һ��Ԫ��
//front();								//���ص�һ��Ԫ��

//��С����
//empty();								//�ж϶�ջ�Ƿ�Ϊ��
//size();								//����ջ�Ĵ�С

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void Test1()
{
	queue<Person> q;

	//׼������
	Person p1("�����", 999);
	Person p2("��˽�", 899);
	Person p3("ɳ����", 799);
	Person p4("��ɮ", 30);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���еĴ�СΪ:" << q.size() << endl;

	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��---" << "����:" << q.front().m_Name
			<< "\t���䣺" << q.front().m_Age << endl;

		//�鿴��β
		cout << "��ͷԪ��---" << "����:" << q.back().m_Name
			<< "\t���䣺" << q.back().m_Age << endl;

		q. pop();
	}
	cout << "���еĴ�СΪ:" << q.size() << endl;

}

int main()
{
	Test1();

	system("pause");
	return 0;
}