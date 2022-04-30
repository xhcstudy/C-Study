#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//多态案例2 制作饮品
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSometing() = 0;
//	
//	//制作饮品
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSometing();
//	}
//
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSometing()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////制作茶叶
//class Tea :public AbstractDrinking
//{public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮开水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSometing()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
////制作函数
//void DoWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;//释放
//}
//
//void Test1()
//{
//	//制作咖啡
//	DoWork(new Coffee);
//	cout << "--------------" << endl;
//	//制作茶叶
//	DoWork(new Tea);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}