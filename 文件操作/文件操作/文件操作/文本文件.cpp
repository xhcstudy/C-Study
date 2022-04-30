#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <fstream>//头文件的包含
#include <assert.h>
#include <string>

//文本文件 写文件

//void Test1()
//{
//	//1. 包含头文件 fstream
//
//	//2. 创建流对象
//
//	ofstream ofs;
//
//	//3. 指定打开方式
//	ofs.open("test.txt", ios::out);
//
//	//4. 写内容
//	ofs << "姓名:张三" << endl;
//	ofs << "性别:男" << endl;
//	ofs << "年龄:18" << endl;
//
//	//5. 关闭文件
//	ofs.close();
//
//}
//
////读文件
//void Test2()
//{
//	//1. 包含头文件 ofsteam
//
//	//2. 创建流对象
//	ifstream ifs;
//
//	//3.打开文件 并且判断是否打开成功
//	ifs.open("test.txt", ios::in);
//	assert(ifs.is_open());	//ifs.is_open()  返回值为bool类型  打开成功返回ture  打开失败返回false
//
//	//4. 读数据 四种方式
//
//	//第一种
//	//char buf[1024] = { 0 };
//	//while ( ifs >> buf )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	//char buf[1024] = { 0 };
//	//while ( ifs.getline(buf, sizeof(buf)) )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)  //EOF  end of file
//	{
//		cout << c;
//	}
//
//	//5. 关闭文件
//	ifs.close();
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