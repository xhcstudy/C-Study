#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��̬�Ļ�������

//������
//
//class Animal
//{
//public:
//
//	virtual void Speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat : public Animal
//{
//public:
//	
//	//��д
//	//��������ֵ���� ������ �����б� ��ȫ��ͬ  �����virtual��д�ɲ�д
//	virtual void Speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//
//	void Speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ִ��˵��
////��ַ���  �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô��������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.������д������麯��
//
////��̬��̬ʹ��
//// �����ָ��������� ִ���������
//
//void DoSpeak(Animal &animal) // Animal &animal = cat C++��������֮�������ת�� ���Ҳ���Ҫ��ǿ������ת�� �����ָ��������ÿ���ֱ��ָ���������
//{
//	animal.Speak();
//}
//
//void Test1()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}