#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//string�Ӵ�
//string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���

void Test1()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void Test2()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����Ϣ
	int pos = email.find("@");

	string username = email.substr(0, pos);
	cout << "username = " << username << endl;
}

int main()
{
	//Test1();
	Test2();

	system("pause");
	return 0;
}