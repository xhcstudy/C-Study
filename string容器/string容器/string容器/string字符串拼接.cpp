#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string�ַ���ƴ��

//-string& operator+=(const char* str);					//����+=������
//-string& operator+=(const char c);					//����+=������
//-string& operator+=(const string &str);				//����+=������
//-string& append(const char* s);						//���ַ���s���ӵ���ǰ�ַ�����β
//-string& append(const char* s, int n);				//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//-string& append(const string &s);						//ͬoperator+=(const string &str)
//-string& append(const string &s, int pos, int n);		//�ַ���s��posλ�ÿ�ʼ��n���ַ����ӵ��ַ���β

//void Test1()
//{
//	string str1 = "��";
//
//	str1 += "������Ϸ";
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ";";
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I ";
//	str3.append("love ");
//	cout << "str3 = " << str3 << endl;
//	
//	str3.append("game abcde", 5);
//	cout << "str3 = " << str3 << endl;
//
//	//str3.append(str2);
//	str3.append(str2, 4, 3);  //����2�Ǵ�str2���Ǹ�λ�ÿ�ʼ��ȡ�� ����3�ǽ�ȡ�ַ�����
//	cout << "str3 = " << str3 << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}