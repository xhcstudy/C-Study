#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��ģ����̳�
//�����������ģ�壬������Ҫָ����������T����������

//template <class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//���󣬱���֪��������T���������ͣ����ܼ̳и�����
//class Son :public Base<int>
//{
//
//};
//
//void Test1()
//{
//	Son s1;
//}
//
////���������ָ��������T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template <class T1, class T2>
//class Son2 :public Base <T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1����������Ϊ:" << typeid(T1).name() << endl;
//		cout << "T2����������Ϊ:" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void Test2()
//{
//	Son2<int, char> s2;
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