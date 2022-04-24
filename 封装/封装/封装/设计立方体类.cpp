#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Cube
{
public:
	//行为

	//接口:设置长宽高三个接口
	//设置长度
	void SetLength(int length)
	{
		m_Length = length;
	}

	//设置宽度
	void SetWidth(int width)
	{
		m_Width = width;
	}

	//设置高度
	void SetHeight(int height)
	{
		m_Height = height;
	}

	//获取面积
	int GetArea()
	{
		return 2 * (m_Length * m_Width + m_Length * m_Height + m_Width * m_Height);
	}

	//获取体积
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
	
	cout << "立方体的面积为:" << c1.GetArea() << endl;
	cout << "立方体的体积为:" << c1.GetVolume() << endl;

	system("pause");
	return 0;
}