#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��̬����2 ������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSometing() = 0;
//	
//	//������Ʒ
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSometing();
//	}
//
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSometing()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSometing()
//	{
//		cout << "��������" << endl;
//	}
//};
//
////��������
//void DoWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;//�ͷ�
//}
//
//void Test1()
//{
//	//��������
//	DoWork(new Coffee);
//	cout << "--------------" << endl;
//	//������Ҷ
//	DoWork(new Tea);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}