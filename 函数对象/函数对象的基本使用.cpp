#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//���
//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ������()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//���ʣ�
//��������(�º���)��һ���࣬����һ������

//�ص�:
//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.�������������Ϊ��������

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//void Test1()
//{
//	MyAdd myAdd;
//	cout<< myAdd(10, 10) << endl;
//}
//
////2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
////����Ҫ�õ���̬������¼״̬  ����ֱ��������ڲ�����һ��������¼���ô���
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;  //�ڲ��Լ�״̬
//};
//
//void Test2()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//
//	cout << "myPrint���õĴ���Ϊ:" << myPrint.count << endl;
//}
//
////3.�������������Ϊ��������
//
//void DoPrint(MyPrint &mp, string test)
//{
//	mp(test);
//}
//
//void Test3()
//{
//	MyPrint myPrint;
//	DoPrint(myPrint, "hello C++");
//}
//
//int main()
//{
//	//Test1();
//	//Test2();
//	Test3();
//
//	system("pause");
//	return 0;
//}