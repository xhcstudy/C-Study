#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//ȫ�ֺ�������Ԫ

//��������
//class Building
//{
//	//GoodGayȫ�ֺ����� Building�ĺ����� ���Է���Building��˽�г�Ա
//	friend void GoodGay(Building &building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;//����
//
//private:
//	string m_BedRoom;//����
//};
//
////ȫ�ֺ���
//void GoodGay(Building &building)
//{
//	cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.m_SittingRoom << endl;
//
//	cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.m_BedRoom << endl;
//}
//
//void Test1()
//{
//	Building building;
//	GoodGay(building);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}