#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <fstream>//ͷ�ļ��İ���
#include <assert.h>
#include <string>

//�ı��ļ� д�ļ�

//void Test1()
//{
//	//1. ����ͷ�ļ� fstream
//
//	//2. ����������
//
//	ofstream ofs;
//
//	//3. ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4. д����
//	ofs << "����:����" << endl;
//	ofs << "�Ա�:��" << endl;
//	ofs << "����:18" << endl;
//
//	//5. �ر��ļ�
//	ofs.close();
//
//}
//
////���ļ�
//void Test2()
//{
//	//1. ����ͷ�ļ� ofsteam
//
//	//2. ����������
//	ifstream ifs;
//
//	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//	assert(ifs.is_open());	//ifs.is_open()  ����ֵΪbool����  �򿪳ɹ�����ture  ��ʧ�ܷ���false
//
//	//4. ������ ���ַ�ʽ
//
//	//��һ��
//	//char buf[1024] = { 0 };
//	//while ( ifs >> buf )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while ( ifs.getline(buf, sizeof(buf)) )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)  //EOF  end of file
//	{
//		cout << c;
//	}
//
//	//5. �ر��ļ�
//	ifs.close();
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