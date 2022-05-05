#define _CRT_SECURE_NO_WARNINGS 1
//�Զ���ͨ�õ�������

#pragma once
#include <iostream>
using namespace std;
#include <assert.h>

template <class T>
class MyArray
{
public:
	//�вι��� ���� ����
	MyArray(int capacity)
	{
		cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray &arr)
	{
		cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;  ������Ĭ���ṩ�Ŀ������캯��  ǳ���� �ᵼ�¶��������ظ��ͷ�

		//���  �����ڶ�������һ���ռ�
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr) // a = b = c
	{
		cout << "operator=" << endl;
		//���ж�ԭ�������Ƿ��ж������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void PushBack(const T &val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++; //���������С
	}

	//βɾ��
	void PopBack()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ
		assert(this->m_Size);
		this->m_Size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��
	T& operator[](int index)
	{
		assert(index >= 0 && index < this->m_Size);
		return this->pAddress[index];
	}

	//�������������
	int GetCapacity()
	{
		return this->m_Capacity;
	}

	//��������Ĵ�С
	int GetSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "��������" << endl;
			delete[] pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //ָ��ָ��������ٵ���ʵ����
	int m_Capacity; //��������
	int m_Size; //�����С
};