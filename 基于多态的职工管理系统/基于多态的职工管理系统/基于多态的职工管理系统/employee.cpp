#define _CRT_SECURE_NO_WARNINGS 1

#include "employee.h"

Employee::Employee(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Employee::ShowInfo()
{
	cout << "ְ�����:  " << this->m_Id
		<< "\tְ������:  " << this->m_Name
		<< "\t��λ:  " << this->GetDeptName()
		<< "\t��λְ��:  ��ɾ�����������" << endl;
}

string Employee::GetDeptName()
{
	return string("Ա��");
}