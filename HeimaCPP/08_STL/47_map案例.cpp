#include <iostream>
#include <vector>
#include <map>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   47_map案例.cpp
 * @time    :   2024/05/05 00:01:23
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
案例描述：
    10名员工，需要分别指派部门
        员工信息包括姓名和工资组成；部门分为策划、美术、研发
    随机给10个讧分配部门和工资
    通过multimap插入信息，key为部门编号，value为员工
    分部门显示员工信息
*/

class Employee
{
public:
    Employee(string name, int salary)
    {
        this->m_Name = name;
        this->m_Salary = salary;
    }

    string m_Name;
    int m_Salary;
};

enum Department
{
    plan = 0,
    art = 1,
    dev = 2,
};

int main(int argc, char const *argv[])
{
    // 创建员工
    vector<Employee> vecEmp;

    string nameSeeds = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        string name = "Employee ";
        name += nameSeeds[i];
        int salary = rand() % 10001 + 10000;
        Employee emp(name, salary);

        vecEmp.push_back(emp);
    }

    // 分组
    multimap<int, Employee> mapEmp;

    for (vector<Employee>::iterator it = vecEmp.begin(); it != vecEmp.end(); it++)
    {
        int depID = rand() % 3; // 0 1 2

        mapEmp.insert(make_pair(depID, *it));
    }

    // 分组显示员工信息
    for (multimap<int, Employee>::iterator it = mapEmp.begin(); it != mapEmp.end(); it++)
    {
        cout << "DepID: " << it->first << "   Name: " << it->second.m_Name << "   Salary: " << it->second.m_Salary << endl;
    }

    system("pause");
    return 0;
}
