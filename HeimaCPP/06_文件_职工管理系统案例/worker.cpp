#include <iostream>
# include <string>
#include "worker.h"

using namespace std;


Employee::Employee(int id, string name, int deptId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}

void Employee::showInfo()
{
    cout << "ID: " << this->m_Id << endl;
    cout << "Name: " << this->m_Name << endl;
    cout << "Department ID: " << this->m_DeptId << endl;
}

string Employee::getDeptName()
{
    return "Employee";
}



Manager::Manager(int id, string name, int deptId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}

void Manager::showInfo()
{
    cout << "ID: " << this->m_Id << endl;
    cout << "Name: " << this->m_Name << endl;
    cout << "Department ID: " << this->m_DeptId << endl;
}

string Manager::getDeptName()
{
    return "Manager";
}


Boss::Boss(int id, string name, int deptId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}

void Boss::showInfo()
{
    cout << "ID: " << this->m_Id << endl;
    cout << "Name: " << this->m_Name << endl;
    cout << "Department ID: " << this->m_DeptId << endl;
}

string Boss::getDeptName()
{
    return "Boss";
}
