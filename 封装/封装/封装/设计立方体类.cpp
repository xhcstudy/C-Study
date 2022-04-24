#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Cube
{
public:
	//��Ϊ

	//�ӿ�:���ó���������ӿ�
	//���ó���
	void SetLength(int length)
	{
		m_Length = length;
	}

	//���ÿ��
	void SetWidth(int width)
	{
		m_Width = width;
	}

	//���ø߶�
	void SetHeight(int height)
	{
		m_Height = height;
	}

	//��ȡ���
	int GetArea()
	{
		return 2 * (m_Length * m_Width + m_Length * m_Height + m_Width * m_Height);
	}

	//��ȡ���
	int GetVolume()
	{
		return m_Length * m_Width * m_Height;
	}

private:
	int m_Length;
	int m_Width;
	int m_Height;
};

int main()
{
	Cube c1;
	c1.SetLength(10);
	c1.SetWidth(10);
	c1.SetHeight(10);
	
	cout << "����������Ϊ:" << c1.GetArea() << endl;
	cout << "����������Ϊ:" << c1.GetVolume() << endl;

	system("pause");
	return 0;
}