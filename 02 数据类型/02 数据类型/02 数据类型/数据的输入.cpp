#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

int main()
{
	// cin >> ����;

	//1.����

	int a = 0;
	cout << "������ͱ���a��ֵ:";
	cin >> a;
	cout << "a = " << a << endl;

	//2.������

	float f = 3.14f;
	cout << "��������ͱ���f��ֵ:";
	cin >> f;
	cout << "f = " << f << endl;

	//3.�ַ���

	char ch = 0;
	cout << "����ַ��ͱ���ch��ֵ:";
	cin >> ch;
	cout << "ch = " << ch << endl;

	//4.�ַ�����

	string str = "abcdef";
	cout << "����ַ����ͱ���str��ֵ:";
	cin >> str;
	cout << "str = " << str << endl;

	//5.��������

	bool flag = true;
	cout << "��������ͱ���flag��ֵ:";
	cin >> flag;
	cout << "flag = " << flag << endl;

	system("pause");
	return 0;
}