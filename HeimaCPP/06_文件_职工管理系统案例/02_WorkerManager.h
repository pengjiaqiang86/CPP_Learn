#pragma once
#include <iostream>
#include <fstream>
#include "02_Worker.h"

#define FILENAME "02_EmpFile.txt"
#define MAX_EMP 1000


using namespace std;


class WorkerManager
{
public:
    // 构造方法
    WorkerManager();
    
    // 析构函数
    ~WorkerManager();

    // 显示菜单
    void showMenu();
    
    // 0 退出系统
    void exitSystem();

    // 1 添加职工
    void addEmp();

    // 保存文件
    void save();

    // 从文件初始化
    void initEmp();

    // 2 显示职工信息
    void showEmp();

    // 判断是否存在
    int isEmpExist(int id);

    // 3 删除职工
    void deleteEmp();

    // 4 修改职工
    void modifyEmp();

    // 5 查找
    void findEmp();

    // 6 排序
    void sortEmp();

    // 7 清空
    void cleanEmp();

public:
    // 职工人数
    int m_Num;

    // Worker数组
    Worker ** m_EmpArray;

    // 文件是否为空
    bool m_isFileEmpty;
};
