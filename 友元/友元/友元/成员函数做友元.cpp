#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	~GoodGay();
//
//	void Visit(); //��Visit�������Է���Building��˽�г�Ա
//
//	void Visit2(); //��Visit2���������Է���Building��˽�г�Ա
//
//public:
//	Building* building;
//};
//
//class Building
//{
//	//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����� ���Է���˽�г�Ա
//	friend void GoodGay::Visit();
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////����ʵ�ֳ�Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//GoodGay::~GoodGay()
//{
//	delete building;
//	building = NULL;
//}
//
//void GoodGay::Visit()
//{
//	cout << "Visit�������ڷ���: " << building->m_SittingRoom << endl;
//	cout << "Visit�������ڷ���: " << building->m_BedRoom << endl;
//}
//
//void GoodGay::Visit2()
//{
//	cout << "Visit2�������ڷ���: " << building->m_SittingRoom << endl;
//	//cout << "Visit2�������ڷ���: " << building->m_BedRoom << endl;
//}
//
//void Test1()
//{
//	GoodGay gg;
//	gg.Visit();
//	gg.Visit2();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}