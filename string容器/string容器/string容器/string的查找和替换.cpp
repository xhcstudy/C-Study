#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string���Һ��滻

//1.����
//void Test1()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ַ�����pos = " << pos << endl;
//	}
//
//	//rfind �� find������
//	//rfind����������� find�������Ҳ���
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
//
////2.�滻
//void Test2()
//{
//	string str1 = "abcdefg";
//
//	//��1��λ���� 3���ַ� �滻Ϊ"1111"
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
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