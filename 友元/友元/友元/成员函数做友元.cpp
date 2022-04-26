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
//	void Visit(); //让Visit函数可以访问Building中私有成员
//
//	void Visit2(); //让Visit2函数不可以访问Building中私有成员
//
//public:
//	Building* building;
//};
//
//class Building
//{
//	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友 可以访问私有成员
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
////类外实现成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
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
//	cout << "Visit函数正在访问: " << building->m_SittingRoom << endl;
//	cout << "Visit函数正在访问: " << building->m_BedRoom << endl;
//}
//
//void GoodGay::Visit2()
//{
//	cout << "Visit2函数正在访问: " << building->m_SittingRoom << endl;
//	//cout << "Visit2函数正在访问: " << building->m_BedRoom << endl;
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