#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>
#include <assert.h>

//虚析构和纯虚析构

//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal的构造函数调用" << endl;
//	}
//
//	//利用虚析构能够解决父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal的虚析构函数调用" << endl;
//	//}
//
//	//纯虚析构  需要声明 也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类无法实例化对象
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void Speak() = 0;
//};
//
//Animal:: ~Animal()
//{
//	cout << "Animal的纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat的构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	~Cat()
//	{
//		assert(m_Name);
//		cout << "Cat的析构函数调用" << endl;
//		delete m_Name;
//		m_Name = NULL;
//	}
//
//	virtual void Speak()
//	{
//		cout << *m_Name <<"小猫在说话" << endl;
//	}
//
//	string* m_Name;
//};
//
//void Test1()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	//父类的指针在析构的时候 不会调用子类中析构函数，导致子类如果有堆区属性，会出现内存泄露
//	delete animal;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}