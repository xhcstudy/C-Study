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
//	void Visit();//�ιۺ��� ����Building�е�����
//
//	~GoodGay();
//
//	Building* building;
//};
//
//class Building
//{
//	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
//	friend class GoodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;//����
//
//private:
//	string m_BedRoom;//����
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//����һ�����������
//	building = new Building;
//}
//
//void GoodGay:: Visit()
//{
//	cout << "�û��������ڷ���:" << building->m_SittingRoom << endl;
//	cout << "�û��������ڷ���:" << building->m_BedRoom << endl;
//}
//
//GoodGay::~GoodGay()
//{
//	delete building;
//	building = NULL;
//}
//
//void Test1()
//{
//	GoodGay gg;
//	gg.Visit();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}