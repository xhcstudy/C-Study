#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//实现一个通用数组类
//可以对内置数据类型以及自定义数据类型的数据进行存储
#include"MyArray.hpp"

void PrintIntArray(MyArray<int> &arr1)
{
	for (int i = 0; i < arr1.GetSize(); i++)
	{
		cout << arr1[i]<<" ";
	}
	cout << endl;
}

void Test1()
{
	//MyArray<int> arr1(5);
	//MyArray<int> arr2(arr1);
	//MyArray<int> arr3(100);
	//arr3 = arr1;

	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.PushBack(i);
	}
	cout << "arr1的打印输出为:" << endl;
	PrintIntArray(arr1);
	cout << "arr1的容量为:" << arr1.GetCapacity() << endl;
	cout << "arr1的大小为:" << arr1.GetSize() << endl;

	MyArray<int> arr2(arr1);

	//尾删
	arr2.PopBack();
	cout << "arr2的容量为:" << arr2.GetCapacity() << endl;
	cout << "arr2的大小为:" << arr2.GetSize() << endl;
}

//测试自定义数据类型
class Person
{
public:

	Person(){};

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

void PrintPersonArray(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		cout << "姓名:" << arr[i].m_Name << "\t"
			<< "年龄:" << arr[i].m_Age << endl;
	}
}

void Test2()
{
	MyArray<Person> arr(10);
	Person p1("孙悟空", 999); 
	Person p2("韩信",30);
	Person p3("妲己", 20);
	Person p4("赵云", 25);
	Person p5("安其拉", 27);

	//将数据插入到数组中
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	//打印数组
	PrintPersonArray(arr);
}

int main()
{
	//Test1();
	Test2();

	system("pause");
	return 0;
}