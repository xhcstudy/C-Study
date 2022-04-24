#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//成员属性设置为私有
//优点1:将所有成员属性设置为私有，可以自己控制读写权限
//优点2:对于写权限，我们可以检测数据的有效性

//设计人类
class Person
{
public:
	//写姓名
	void SetName(string name)
	{
		m_Name = name;
	}

	//读姓名
	string GetName()
	{
		return m_Name;
	}

	//获取年龄  
	int GetAge()
	{
		if (flag)
		{
			return 0;
		}
		//m_Age = 0;//初始化为0岁
		return m_Age;
	}

	//设置年龄
	void SetAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄输入有误" << endl;
			flag = 1;
		}
		m_Age = age;
	}

	//设置情人  只写
	void SetLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//姓名  可读可写
	string m_Name;
	
	//年龄  可读可写 如果想修改年龄（必须是0~150之间）
	int m_Age;

	//情人  只写
	string m_Lover;

	int flag = 0;
};

//int main()
//{
//	Person p;
//	p.SetName("张三");
//
//	cout << "姓名:" << p.GetName() << endl;
//
//	//p.m_Age = 18;
//	//p.SetAge(18);
//
//	p.SetAge(1000);
//	cout << "年龄:" << p.GetAge() << "岁" << endl;
//
//	//设置情人为苍井女士
//	p.SetLover("苍井");
//	//cout << "情人:" << p.SetLover() << endl;
//
//	system("pause");
//	return 0;
//}