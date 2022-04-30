#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <fstream>

//�������ļ� д�ļ�
class Person
{
public:

	char m_Name[64];
	int m_Age;
};

void Test1()
{ 
	ofstream ofs;

	ofs.open("person,txt", ios::out| ios::binary);

	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person)); 
	
	ofs.close();
}

//���ļ�
void Test2()
{
	ifstream ifs;

	ifs.open("person,txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "����: " << p.m_Name << endl << "����: " << p.m_Age << endl;

	ifs.close();
}

int main()
{
	//Test1();
	Test2();
	
	system("pause");
	return 0;
}