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

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void ShowMenu();

	//�˳�ϵͳ
	void ExitSystem();

	//���ְ��
	void AddEmp();

	//�����ļ�
	void Save();

	//ͳ���ļ��е�����
	int GetEmpNum();

	//��ʼ��Ա��
	void InitEmp();

	//��ʾְ��
	void ShowEmp();

	//ɾ��ְ��
	void DelEmp();

	//�ж�ְ���Ƿ���� ������ڷ���ְ�����������е�λ�� �����ڷ���-1
	int IsExit(int id);

	//�޸�ְ��
	void ModEmp();

	//����ְ��
	void FindEmp();

	//����ְ��
	void SortEmp();

	//�����ļ�
	void CleanFile();

	//��������
	~WorkerManager();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;

};