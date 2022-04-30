#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//分别利用普通写法和多态技术实现计算器

//普通写法
//class Calculator
//{
//public:
//
//	int GetResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		else
//		{
//			return m_Num1 / m_Num2;
//		}
//		//如果想要扩展新的功能，需求修改原码
//		//在真实的开发中 提倡 开闭原则
//		//开闭原则: 对扩展进行开放，对修改进行关闭
//	}
//
//	int m_Num1;//操作数1
//	int m_Num2;//操作数2
//};
//
//void Test1()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.GetResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.GetResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.GetResult("*") << endl;
//}
//
////利用多态实现计算器
//
////多态带来的好处:
////1. 组织结构清晰
////2. 可读性强
//
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//
//	virtual int GerResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int GerResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计数器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	virtual int GerResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器类
//class MulCalculator :public AbstractCalculator
//{
//public:
//	virtual int GerResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void Test2()
//{
//	//多态使用条件
//	//父类的指针或者引用指向子类对象
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->GerResult() << endl;
//	//用完后记得销毁
//	delete abc;
//	
//	//减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->GerResult() << endl;
//	delete abc;
//
//	//乘法运算
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->GerResult() << endl;
//	delete abc;
//	abc = NULL;
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