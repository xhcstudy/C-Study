#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//实现通用对数组进行排序的函数
//规则 从大到小
//算法 选择排序
//测试 char数组 和 int数组

//交换函数模板
//template <typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template <class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值比遍历出的数值要小，说明j才是真正的最大值下标
//			if (arr[j] > arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			//交换max 和 i下标的元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////打印数组模板
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
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	PrintArray(charArr, num);
//}
//
//void Test2()
//{
//	//测试int数组
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