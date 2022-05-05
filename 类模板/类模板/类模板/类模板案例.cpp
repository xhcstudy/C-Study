#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//ʵ��һ��ͨ��������
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
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
		//����β�巨�������в�������
		arr1.PushBack(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
	PrintIntArray(arr1);
	cout << "arr1������Ϊ:" << arr1.GetCapacity() << endl;
	cout << "arr1�Ĵ�СΪ:" << arr1.GetSize() << endl;

	MyArray<int> arr2(arr1);

	//βɾ
	arr2.PopBack();
	cout << "arr2������Ϊ:" << arr2.GetCapacity() << endl;
	cout << "arr2�Ĵ�СΪ:" << arr2.GetSize() << endl;
}

//�����Զ�����������
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
		cout << "����:" << arr[i].m_Name << "\t"
			<< "����:" << arr[i].m_Age << endl;
	}
}

void Test2()
{
	MyArray<Person> arr(10);
	Person p1("�����", 999); 
	Person p2("����",30);
	Person p3("槼�", 20);
	Person p4("����", 25);
	Person p5("������", 27);

	//�����ݲ��뵽������
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	//��ӡ����
	PrintPersonArray(arr);
}

int main()
{
	//Test1();
	Test2();

	system("pause");
	return 0;
}