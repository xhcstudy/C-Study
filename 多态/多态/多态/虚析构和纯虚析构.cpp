#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <assert.h>

//�������ʹ�������

//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//
//	//�����������ܹ��������ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal����������������" << endl;
//	//}
//
//	//��������  ��Ҫ���� Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ������޷�ʵ��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void Speak() = 0;
//};
//
//Animal:: ~Animal()
//{
//	cout << "Animal�Ĵ���������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	~Cat()
//	{
//		assert(m_Name);
//		cout << "Cat��������������" << endl;
//		delete m_Name;
//		m_Name = NULL;
//	}
//
//	virtual void Speak()
//	{
//		cout << *m_Name <<"Сè��˵��" << endl;
//	}
//
//	string* m_Name;
//};
//
//void Test1()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	//�����ָ����������ʱ�� �����������������������������������ж������ԣ�������ڴ�й¶
//	delete animal;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}