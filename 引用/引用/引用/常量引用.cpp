#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��ӡ����
void ShowValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

#define PRINT(X) cout<<""#X" = "<<X<<endl;

int main()
{
	//��������
	//ʹ�ó���:���������βΣ���ֹ�����

	//int a = 10;
	//����const֮�� �������������޸� int temp = 10; int& ref = temp;
	//const int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
	//ret = 20;//����const֮���Ϊֻ���������޸�
	int a = 100;
	ShowValue(a);
	cout << "a = " << a << endl;
	PRINT(a)

	system("pause");
	return 0;
}