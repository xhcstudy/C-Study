#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <assert.h>

//��ָ����ó�Ա����  
//��ָ���ǿ��Ե��ó�Ա������  ����Ҫע��thisָ������
//ֻҪ�õ�����  ǰ��Ĭ�ϻ���һ��this->
//���Ա���ԭ���Ǵ����ָ��ΪNULL
//�൱�� NULL->m_Age
//����assert �����ж� ��ǿ����Ľ�׳��

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
//		//��ߴ���Ľ�׳��
//		assert(this);
//		//if (this == NULL)
//		//{
//		//	return;
//		//}
//
//		//ֻҪ�õ�����  ǰ��Ĭ�ϻ���һ��this->
//		//���Ա���ԭ���Ǵ����ָ��ΪNULL
//		//�൱�� NULL->m_Age
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