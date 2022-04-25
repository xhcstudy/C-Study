#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员

//先有Phone 然后有Person  
//先析构Person 再析构Phone  因为在都在栈上存储  先进后出
class Phone
{
public:

	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	//手机的品牌名称
	string m_PName;
};

class Person
{
public:

	//Phone m_Phone = pName 隐式转换法
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	string m_Name;//姓名

	Phone m_Phone;//手机
};

void Test1()
{
	Person p("张三","苹果MAX");
	
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;

}

int main()
{
	Test1();

	system("pause");
	return 0;
}