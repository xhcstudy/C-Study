#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <stack>

//stack��һ���Ƚ���������ݽṹ ֻ��ջ��һ�����ڣ���˲������б�����Ϊ
//�����ݽ���ջ   �����ݽг�ջ

//���캯��
//stack<T> stk;							//stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
//stack(const stack &stk);				 //�������캯��

//��ֵ����
//stack& operator=(const stack &stk);	//���صȺŲ�����

//���ݴ洢
//push(ele);							//��ջ�����Ԫ��
//pop();								//��ջ���Ƴ���һ��Ԫ��
//top();								//����ջ��Ԫ��

//��С����
//empty();								//�ж϶�ջ�Ƿ�Ϊ��
//size();								//����ջ�Ĵ�С

void Test1()
{
	stack<int> stk;

	//��ջ
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);

	cout << "ջ�Ĵ�С:" << stk.size() << endl;
	//ֻҪջ ��Ϊ�վͲ鿴ջ��������ִ�г�ջ����
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;
	cout << "ջ�Ĵ�С:" << stk.size() << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}