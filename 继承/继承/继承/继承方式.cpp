#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//继承方式

//公共继承

//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//	void Function()
//	{
//		m_A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
//		m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//void Test1()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100; //到Son1中 m_B是保护权限，类外访问不到
//}
//
////保护继承
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 : protected Base2
//{
//public:
//	void Function()
//	{
//		m_A = 10; // 父类中的公有权限成员 到子类中变为了保护权限
//		m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//void Test2()
//{
//	Son2 s2;
//	//s2.m_A = 100; //到Son2中 m_A变为了保护权限，类外访问不到
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//public:
//	void Function()
//	{
//		m_A = 10; // 父类中的公有权限成员 到子类中变为了私有权限
//		m_B = 10; // 父类中的保护权限成员 到子类中变为了私有权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//class Grandson3 : public: Son3
//{
//public:
//	void Function()
//	{
//		//m_A = 10; //说明到了Son3中 m_A变为了私有
//		//m_B = 10; //说明到了Son3中 m_A变为了私有
//		//m_C = 10; 
//	}
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