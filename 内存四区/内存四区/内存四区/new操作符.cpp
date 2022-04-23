#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//1.new的基本语法
int* Function()
{
	//在堆区创建整形数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}

void Test1()
{
	int* p = Function();
	int i = 0;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据有程序员管理开辟并且释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;

	//cout << *p << endl;//内存已经被释放了，再次访问就是非法操作，会报错
}

//2.在堆区利用new开辟数组
void Test2()
{
	//创建10个整形数据的数组,在堆区
	int* arr = new int[10];//10代表数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	//释放堆区数组
	//释放数组的时候，要加[]才可以
	delete[] arr;
}
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}