#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <list>

//list���ݴ�ȡ	��֧���������  ��������˫�������
//front();	//���ص�һ��Ԫ��
//back();	//�������һ��Ԫ��

//void Test1()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��֧��[]��at��ʽ����list�����е�Ԫ��
//	//list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧���������
//
//	cout << "��һ��Ԫ��Ϊ:" << L1.front() << endl;
//
//	cout << "���һ��Ԫ��Ϊ:" << L1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	//it = it + 3;   ֻ��++ --����  ��Ϊ��֧��������� ֻ��һ������
//	it++;
//	it--;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}