#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//1.new�Ļ����﷨
int* Function()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void Test1()
{
	int* p = Function();
	int i = 0;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������г���Ա�����ٲ����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;

	//cout << *p << endl;//�ڴ��Ѿ����ͷ��ˣ��ٴη��ʾ��ǷǷ��������ᱨ��
}

//2.�ڶ�������new��������
void Test2()
{
	//����10���������ݵ�����,�ڶ���
	int* arr = new int[10];//10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	//�ͷŶ�������
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[] arr;
}
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}