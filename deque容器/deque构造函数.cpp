#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <deque>

//deque˫������
//���vector������ͷ���Ĳ����ɾ�������ٶȱ�vector��(��ΪҪŲ������,��deque����Ų������)
//����vector����Ԫ��ʱ���ٶȻ��deque�죬������ߵ��ڲ�ʵ���й�
//deque�ڲ���һ���п���(����ָ������)��ά��ÿ�λ����������ݣ��������д����ʵ������
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
//deque�����ĵ�����Ҳ��֧��������ʵ�


//deque�����Ĺ��캯��
//dequer<T> deqT;			//Ĭ�Ϲ�����ʽ
//deque(beg, end);			//���캯����[beg,end)�����е�Ԫ�ؿ���������
//deque(n, elem);			//���캯����n��elem����������
//deque(const deque &deq);	//�������캯��

//void PrintDeque(deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;   �����е��������ڲ������޸���  const_iterator ֻ��������
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	PrintDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	PrintDeque(d2);
//
//	deque<int> d3(10, 100);
//	PrintDeque(d3);
//
//	deque<int> d4(d3);
//	PrintDeque(d4);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}