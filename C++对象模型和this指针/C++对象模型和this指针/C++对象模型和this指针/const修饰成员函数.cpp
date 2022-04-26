#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//常函数
class Person
{
public:

	//this指针的本质  是指针常量  指针的指向是不可以修改的
	//this指针其实就是:Person* const this
	//常函数其实就是将this指针进一步修饰 使得常函数内部不能修改成员变量
	//修饰为 const Person* const this
	void ShowPerson() const
	{
		//this->m_A = 100;
		//this = NULL; //this指针不可以修改指针的指向
		m_B = 100;
	}

	void Function()
	{

	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值
};

void Test1()
{
	Person p;
	p.ShowPerson();
}

//常对象

void Test2()
{
	const Person p;//在对象前加上const，变为常对象
	//p.m_A = 100;
	p.m_B = 100;//m_B是一个特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	//p.Function(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性

}

int main()
{
	Test1();

	system("pause");
	return 0;
}