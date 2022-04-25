#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类，C++编译器会给每个类都添加至少三个函数
//默认构造函数 (空实现)
//析构函数 (空实现)
//拷贝函数 (值拷贝)

//2.如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//如果我们提供了拷贝构造函数，编译器就不在提供普通的构造函数

class Person
{
public:
	//Person()
	//{
	//	cout << "Person的默认构造函数调用" << endl;
	//}

	//Person(int age)
	//{
	//	m_Age = age;
	//	cout << "Person的有参构造函数调用" << endl;
	//}

	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};

//void Test1()
//{
//	Person p;
//	p.m_Age = 18;
//	
//	Person p2(p);
//
//	cout << "p2的年龄为:" << p2.m_Age << endl;
//
//}

//void Test2()
//{
//	//Person p; 提供了有参数的构造函数，编译器就不再提供默认的构造函数，所以创建Person p会报错没有合适的默认构造函数可用
//	Person p(18);
//
//	Person p2(p);
//	cout << "p2的年龄为:" << p2.m_Age << endl;
//}

//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}