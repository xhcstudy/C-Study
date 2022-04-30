#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//多态的基本概念

//动物类
//
//class Animal
//{
//public:
//
//	virtual void Speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////猫类
//class Cat : public Animal
//{
//public:
//	
//	//重写
//	//函数返回值类型 函数名 参数列表 完全相同  子类的virtual可写可不写
//	virtual void Speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//public:
//
//	void Speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////执行说话
////地址早绑定  在编译阶段确定函数地址
////如果想执行让猫说话，那么这个函数的地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//
////动态多态满足条件
////1.有继承关系
////2.子类重写父类的虚函数
//
////动态多态使用
//// 父类的指针或者引用 执行子类对象
//
//void DoSpeak(Animal &animal) // Animal &animal = cat C++中允许父子之间的类型转换 并且不需要做强制类型转换 父类的指针或者引用可以直接指向子类对象
//{
//	animal.Speak();
//}
//
//void Test1()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}