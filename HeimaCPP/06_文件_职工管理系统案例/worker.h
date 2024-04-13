#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker
{
public:
    virtual void showInfo() = 0;

    virtual string getDeptName() = 0;

    int m_Id;
    string m_Name;
    int m_DeptId;
};


class Employee : public Worker
{
public:
    Employee(int id, string name, int deptId);

    virtual void showInfo();

    virtual string getDeptName();
};


class Manager : public Worker
{
public:
    Manager(int id, string name, int deptId);

    virtual void showInfo();

    virtual string getDeptName();
};


class Boss : public Worker
{
public:
    Boss(int id, string name, int deptId);

    virtual void showInfo();

    virtual string getDeptName();
};