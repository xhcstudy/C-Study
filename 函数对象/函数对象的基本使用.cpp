#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//概念：
//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载()时，行为类似函数调用，也叫仿函数
//本质：
//函数对象(仿函数)是一个类，不是一个函数

//特点:
//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//3.函数对象可以作为参数传递

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//void Test1()
//{
//	MyAdd myAdd;
//	cout<< myAdd(10, 10) << endl;
//}
//
////2.函数对象超出普通函数的概念，函数对象可以有自己的状态
////不需要用到静态变量记录状态  可以直接在类的内部定义一个变量记录调用次数
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
//	int count;  //内部自己状态
//};
//
//void Test2()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//
//	cout << "myPrint调用的次数为:" << myPrint.count << endl;
//}
//
////3.函数对象可以作为参数传递
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