#define _CRT_SECURE_NO_WARNINGS 1

#include "boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Boss::ShowInfo()
{
	cout << "ְ�����:  " << this->m_Id
		<< "\tְ������:  " << this->m_Name
		<< "\t��λ:  " << this->GetDeptName()
		<< "\t��λְ��:  ����˾��������" << endl;
}

string Boss::GetDeptName()
{
	return string("�ܲ�");
}