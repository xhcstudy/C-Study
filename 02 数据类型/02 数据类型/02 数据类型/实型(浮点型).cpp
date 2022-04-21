#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	//C++中默认情况下 输出一个小数 会显示出6位有效数字
//	//1.单精度 float 七位有效数字
//	//存储方式 S E M 方式  32位和64位不同 具体看C-study test31  32位下: S占1位  E占8位 M占23位
//
//	float f1 = 3.1415926f;//f代表float 不写编译器默认为double型
//	cout << "f1 = " << f1 << endl;
//	printf("f1 = %f\n", f1);
//
//	//2.双精度 double 15-16位有效数字
//
//	double d1 = 3.1415926;
//	cout << "d1 = " << d1 << endl;
//	printf("d1 = %lf\n", d1);
//
//	cout << "float所占字节数为:" << sizeof(float) << endl;
//	cout << "double所占字节数为:" << sizeof(double) << endl;
//
//	//科学计数法
//	float f2 = 3e2f; // 3 * 10^2
//	float f3 = 3e-2f;// 3 * 10^-2
//	cout << "f2 = " << f2 << endl;
//	cout << "f3 = " << f3 << endl;
//	system("pause");
//	return 0;
//}