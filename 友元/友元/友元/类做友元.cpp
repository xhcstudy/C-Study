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
//	void Visit();//参观函数 访问Building中的属性
//
//	~GoodGay();
//
//	Building* building;
//};
//
//class Building
//{
//	//GoodGay类是本类的好朋友，可以访问本类中私有成员
//	friend class GoodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;//客厅
//
//private:
//	string m_BedRoom;//卧室
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建一个建筑物对象
//	building = new Building;
//}
//
//void GoodGay:: Visit()
//{
//	cout << "好基友类正在访问:" << building->m_SittingRoom << endl;
//	cout << "好基友类正在访问:" << building->m_BedRoom << endl;
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