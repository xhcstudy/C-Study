#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string m_Name;
	void SetName(string name)
	{
		m_Name = name;
	}
	void ShowInfomation()
	{
		cout << "����:" << m_Name << endl;
	}
};

class c1
{
	int m_A; //Ĭ��Ȩ����˽��
};

struct s1
{
	int m_A; //Ĭ��Ȩ���ǹ���
};

//int main()
//{
//	Student s1;
//	s1.SetName("Ф�ƴ�");
//	s1.ShowInfomation();
//
//	//C++��struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
//	//structĬ��Ȩ��Ϊ������classĬ��Ȩ��Ϊ˽��
//	//c1 C1;
//	//C1.m_A = 100;  Ȩ����˽�в��������������
//	struct s1 S1;
//	S1.m_A = 100;
//
//	system("pause");
//	return 0;
//}