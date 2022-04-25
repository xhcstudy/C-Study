#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//深拷贝和浅拷贝
//浅拷贝:简单的赋值操作
//深拷贝:在堆区重新申请空间，进行拷贝操作

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person &p)
//	{
//		m_Height = new int(*p.m_Height);
//		m_Age = p.m_Age;
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;//年龄
//	int* m_Height;//身高
//};
//
////多次释放同一个空间，报错 
////因为没有自己构造拷贝函数，利用系统默认的拷贝函数是做浅拷贝操作，会将p1中 int* m_Height的内容 也就是存储160的地址赋值给 p2的int* m_Height
////当调用Test1结束之后，会释放栈上的p2 然后释放p1 然后每次释放对象都会调用类中的析构函数 但是p1中的m_Height和p2中的m_Height内容是同一块空间
////释放p2 然后释放p1会对同一块空间多次释放
//void Test1()
//{
//	Person p1(18,160);
//
//	cout << "p1的年龄为:" << p1.m_Age << "\n身高为:"<< *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2的年龄为:" << p2.m_Age << "\n身高为:" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}