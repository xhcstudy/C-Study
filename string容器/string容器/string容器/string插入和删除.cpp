#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string�Ĳ����ɾ��

//string& insert(int pos, const char* s);			//�����ַ���
//string& insert(int pos, const string& s);			//�����ַ���
//string& insert(int pos, int n, char c);			//��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos);				//ɾ����Posλ�ÿ�ʼ��n���ַ�

//void Test1()
//{
//	string str = "hello";
//
//	//����
//	str.insert(1, "111");
//	//hello - h111ello
//	cout << "str = " << str << endl;
//
//	//ɾ��
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}