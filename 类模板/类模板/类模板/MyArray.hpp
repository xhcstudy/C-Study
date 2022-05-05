#define _CRT_SECURE_NO_WARNINGS 1
//自动的通用的数组类

#pragma once
#include <iostream>
using namespace std;
#include <assert.h>

template <class T>
class MyArray
{
public:
	//有参构造 参数 容量
	MyArray(int capacity)
	{
		cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray &arr)
	{
		cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;  编译器默认提供的拷贝构造函数  浅拷贝 会导致堆区数据重复释放

		//深拷贝  重新在堆区开辟一个空间
		this->pAddress = new T[arr.m_Capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr) // a = b = c
	{
		cout << "operator=" << endl;
		//先判断原来堆区是否有堆区数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void PushBack(const T &val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++; //更新数组大小
	}

	//尾删法
	void PopBack()
	{
		//让用户访问不到最后一个元素，即为尾删
		assert(this->m_Size);
		this->m_Size--;
	}

	//通过下标的方式访问数组中的元素
	T& operator[](int index)
	{
		assert(index >= 0 && index < this->m_Size);
		return this->pAddress[index];
	}

	//返回数组的容量
	int GetCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组的大小
	int GetSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "析构函数" << endl;
			delete[] pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //指针指向堆区开辟的真实数组
	int m_Capacity; //数组容量
	int m_Size; //数组大小
};