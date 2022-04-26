#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <assert.h>

//空指针调用成员函数  
//空指针是可以调用成员函数的  但是要注意this指针问题
//只要用到属性  前面默认会有一个this->
//所以报错原因是传入的指针为NULL
//相当于 NULL->m_Age
//加上assert 或者判断 加强代码的健壮性

//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void ShowPersonAge()
//	{
//		//提高代码的健壮性
//		assert(this);
//		//if (this == NULL)
//		//{
//		//	return;
//		//}
//
//		//只要用到属性  前面默认会有一个this->
//		//所以报错原因是传入的指针为NULL
//		//相当于 NULL->m_Age
//		cout << "age = " << this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void Test1()
//{
//	Person* p = NULL;
//
//	//p->ShowClassName();
//
//	p->ShowPersonAge();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}