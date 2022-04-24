#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//C++面向对象三大特性:封装、继承、多态

//封装是C++面向对象三大特性之一
//封装的意义:
//将属性和行为作为一个整体，表现生活中的事物
//将属性和行为加以权限控制

//圆周率
const double PI = 3.14;

//设计一个圆类，求圆的周长
//圆求周长公式:2*PI*半径

//class 代表设计一个类，类后面紧跟着的就是类的名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
	//公共权限
public:
	//类中的属性和行为 统一称为成员
	//属性  成员属性 成员变量
	//行为  成员函数 成员方法


	//属性
	string m_Name;
	int m_id;

	//行为
	void ShowInformation()
	{
		cout << "姓名:" << m_Name << endl;
		cout << "学号:" << m_id << endl;
	}

	//给姓名赋值
	void SetName(string name)
	{
		m_Name = name;
	}

	//给学号赋值
	void SetId(int id)
	{
		m_id = id;
	}
};

//int main()
//{
//	//通过圆类，创建一个具体的圆(对象)
//	//实例化  (通过一个类，创建一个对象的过程)
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//	
//	cout << "圆的周长为:" << c1.calculateZC() << endl;
//
//	//设计学生类
//	Student s1;
//	//s1.m_id = 20193060;
//	//s1.m_Name = "肖浩聪";
//	s1.SetName("肖浩聪");
//	s1.SetId(20193060);
//	s1.ShowInformation();
//	Student s2;
//
//
//	system("pause");
//	return 0;
//}