#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//ʵ��ͨ�ö������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ������
//���� char���� �� int����

//��������ģ��
//template <typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template <class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ�ȱ���������ֵҪС��˵��j�������������ֵ�±�
//			if (arr[j] > arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			//����max �� i�±��Ԫ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////��ӡ����ģ��
//template <typename T>
//void PrintArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	//����char����
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	PrintArray(charArr, num);
//}
//
//void Test2()
//{
//	//����int����
//	int intArr[] = { 1, 2, 3, 5, 4, 8, 6, 0, 9 };
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, num);
//	PrintArray(intArr, num);
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}