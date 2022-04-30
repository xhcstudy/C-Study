#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <fstream>

//二进制文件 写文件
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

	Person p = { "张三", 18 };
	ofs.write((const char*)&p, sizeof(Person)); 
	
	ofs.close();
}

//读文件
void Test2()
{
	ifstream ifs;

	ifs.open("person,txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "姓名: " << p.m_Name << endl << "年龄: " << p.m_Age << endl;

	ifs.close();
}

int main()
{
	//Test1();
	Test2();
	
	system("pause");
	return 0;
}