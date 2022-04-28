#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//继承中的构造和析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数调用" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base的析构函数调用" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数调用" << endl;
//	}
//	
//	~Son()
//	{
//		cout << "Son的析构函数调用" << endl;
//	}
//};
//
//void Test1()
//{
//	//继承中的构造和析构顺序如下:
//	//先构造父类，再构造子类，析构的顺序相反
//	Son s1;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}