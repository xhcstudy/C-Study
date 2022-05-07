#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <queue>
#include <string>

//queue是一种先进先出的数据结构,队尾进，队头出
//只有队头和队尾会被外界使用，不允许有遍历行为

//构造函数	
//queue<T> que;							//采用模板类实现，默认构造形式
//queue(const queue &que);				//拷贝构造

//赋值操作
//queue& operator=(const queue &que);	//重载等号运算符

//数据存取
//push(elem);							//队尾添加元素
//pop();								//队头移除第一个元素
//back();								//返回最后一个元素
//front();								//返回第一个元素

//大小操作
//empty();								//判断堆栈是否为空
//size();								//返回栈的大小

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void Test1()
{
	queue<Person> q;

	//准备数据
	Person p1("孙悟空", 999);
	Person p2("猪八戒", 899);
	Person p3("沙和尚", 799);
	Person p4("唐僧", 30);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队列的大小为:" << q.size() << endl;

	while (!q.empty())
	{
		//查看队头
		cout << "队头元素---" << "姓名:" << q.front().m_Name
			<< "\t年龄：" << q.front().m_Age << endl;

		//查看队尾
		cout << "队头元素---" << "姓名:" << q.back().m_Name
			<< "\t年龄：" << q.back().m_Age << endl;

		q. pop();
	}
	cout << "队列的大小为:" << q.size() << endl;

}

int main()
{
	Test1();

	system("pause");
	return 0;
}