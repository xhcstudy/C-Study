#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向的是 被调用的成员函数 所属的对象 
//		this->age = age;
//	}
//
//	//为什么要用Person& 看调试 如果不加上& 每次返回之后相当于重新创建一个p2 this指向的内容虽然一直再改变，但是p2的内容不会改变
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//
//		//this是指向被调用函数成员所属的对象  *this就是这个所属的对象
//		return *this;
//	}
//
//	int age;
//};

//1.解决名称冲突

//void Test1()
//{
//	Person p1(18);
//
//	cout << "p1的年龄为:" << p1.age << endl;
//}

//2.返回对象本身用*this

//void Test2()
//{
//	Person p1(10);
//	Person p2(20);
//	//链式变成思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄为:" << p2.age << endl;
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