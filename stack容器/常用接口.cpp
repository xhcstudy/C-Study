#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <stack>

//stack是一种先进后出的数据结构 只有栈顶一个出口，因此不允许有遍历行为
//入数据叫入栈   出数据叫出栈

//构造函数
//stack<T> stk;							//stack采用模板类实现，stack对象的默认构造形式
//stack(const stack &stk);				 //拷贝构造函数

//赋值操作
//stack& operator=(const stack &stk);	//重载等号操作符

//数据存储
//push(ele);							//向栈顶添加元素
//pop();								//从栈顶移除第一个元素
//top();								//返回栈顶元素

//大小操作
//empty();								//判断堆栈是否为空
//size();								//返回栈的大小

void Test1()
{
	stack<int> stk;

	//入栈
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);

	cout << "栈的大小:" << stk.size() << endl;
	//只要栈 不为空就查看栈顶，并且执行出栈操作
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;
	cout << "栈的大小:" << stk.size() << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}