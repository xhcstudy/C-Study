#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//类模板与继承
//如果父类是类模板，子类需要指定出父类中T的数据类型

//template <class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//错误，必须知道父类中T的数据类型，才能继承给子类
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
////如果想灵活的指定父类中T类型，子类也需要变为类模板
//template <class T1, class T2>
//class Son2 :public Base <T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为:" << typeid(T1).name() << endl;
//		cout << "T2的数据类型为:" << typeid(T2).name() << endl;
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