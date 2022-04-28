#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//菱形继承

//动物类

class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承问题
//在继承方式前面加上 virtual关键字 变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep : virtual public Animal
{

};

//驼类
class Camel : virtual public Animal
{

};

//羊驼类
class Alpaca : public Sheep, public Camel
{

};

void Test1()
{
	Alpaca ap;
	ap.Sheep::m_Age = 22;
	ap.Camel::m_Age = 21;
	//当菱形继承，有两个父类拥有相同属性，需要加以作用域区分
	cout << "ap.Sheep::m_Age =" << ap.Sheep::m_Age << endl;
	cout << "ap.Camel::m_Age =" << ap.Camel::m_Age << endl;
	cout << "ap.m_Age = " << ap.m_Age << endl;

	//这份数据我们知道 只要有一份就可以了,菱形继承导致数据有两份，资源浪费
}

int main()
{
	Test1();

	system("pause");
	return 0;
}