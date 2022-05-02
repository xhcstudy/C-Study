#define _CRT_SECURE_NO_WARNINGS 1

#pragma once 

#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>

#define FILENAME "emFile.txt"

enum
{
	EXIT,
	ADD,
	SHOW,
	DELETE,
	MODIFY,
	FIND,
	SORT,
	DESTROY
};

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//展示菜单
	void ShowMenu();

	//退出系统
	void ExitSystem();

	//添加职工
	void AddEmp();

	//保存文件
	void Save();

	//统计文件中的人数
	int GetEmpNum();

	//初始化员工
	void InitEmp();

	//显示职工
	void ShowEmp();

	//删除职工
	void DelEmp();

	//判断职工是否存在 如果存在返回职工所在数组中的位置 不存在返回-1
	int IsExit(int id);

	//修改职工
	void ModEmp();

	//查找职工
	void FindEmp();

	//排序职工
	void SortEmp();

	//请问文件
	void CleanFile();

	//析构函数
	~WorkerManager();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//判断文件是否为空的标志
	bool m_FileIsEmpty;

};