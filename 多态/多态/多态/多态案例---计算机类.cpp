#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
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
//		//�����Ҫ��չ�µĹ��ܣ������޸�ԭ��
//		//����ʵ�Ŀ����� �ᳫ ����ԭ��
//		//����ԭ��: ����չ���п��ţ����޸Ľ��йر�
//	}
//
//	int m_Num1;//������1
//	int m_Num2;//������2
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
////���ö�̬ʵ�ּ�����
//
////��̬�����ĺô�:
////1. ��֯�ṹ����
////2. �ɶ���ǿ
//
////ʵ�ּ�����������
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
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int GerResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	virtual int GerResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
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
//	//��̬ʹ������
//	//�����ָ���������ָ���������
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->GerResult() << endl;
//	//�����ǵ�����
//	delete abc;
//	
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->GerResult() << endl;
//	delete abc;
//
//	//�˷�����
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