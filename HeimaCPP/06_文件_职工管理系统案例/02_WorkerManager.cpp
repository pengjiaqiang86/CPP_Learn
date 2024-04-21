#include <iostream>
#include "02_WorkerManager.h"

WorkerManager::WorkerManager()
{
    ifstream ifs;

    ifs.open(FILENAME, ios::in);

    // 文件不存在的情况
    if (! ifs.is_open())
    {
        this->m_Num = 0;
        this->m_EmpArray = NULL;
        this->m_isFileEmpty = true;

        ifs.close();
        return;
    }
    
    // 文件存在但是为空
    char ch;
    ifs >> ch;

    if (ifs.eof())
    {
        this->m_Num = 0;
        this->m_EmpArray = NULL;
        this->m_isFileEmpty = true;

        ifs.close();
        return;
    }

    // 文件存在且不为空
    this->m_EmpArray = new Worker*[MAX_EMP];
    this->initEmp();

    // for (int i = 0; i < this->m_Num; i++)
    // {
    //     cout << this->m_EmpArray[i]->m_Id << endl;
    //     cout << this->m_EmpArray[i]->m_Name << endl;
    //     cout << this->m_EmpArray[i]->m_DeptId << endl;
    // }
}

// Deconstructor
WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != NULL)
    {
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}

// 显示菜单
void WorkerManager::showMenu()
{
    cout << "===============================================" << endl;
    cout << "=================== Welcome ===================" << endl;
    cout << "=================== 0. 退出 ===================" << endl;
    cout << "=================== 1. 添加 ===================" << endl;
    cout << "=================== 2. 显示 ===================" << endl;
    cout << "=================== 3. 删除 ===================" << endl;
    cout << "=================== 4. 修改 ===================" << endl;
    cout << "=================== 5. 查找 ===================" << endl;
    cout << "=================== 6. 排序 ===================" << endl;
    cout << "=================== 7. 清空 ===================" << endl;
    cout << "===============================================" << endl;
}

// 0 退出
void WorkerManager::exitSystem()
{
    cout << "退出系统..." << endl;
    system("pause");
    exit(0);
}

// 保存文件
void WorkerManager::save() {
    ofstream ofs;

    ofs.open(FILENAME, ios::out);

    for (int i = 0; i < this->m_Num; i++)
    {
        Worker * temp = this->m_EmpArray[i];

        ofs << temp->m_Id     << " ";
        ofs << temp->m_Name   << " ";
        ofs << temp->m_DeptId << endl;
    }

    ofs.close();
}


// 从文件初始化
void WorkerManager::initEmp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int depID;

    int index = 0; // 索引

    while(ifs >> id && ifs >> name && ifs >> depID)
    {
        Worker * worker;

        switch (depID)
        {
        case 1:
            worker = new Employee(id, name, depID);
            break;
        case 2:
            worker = new Manager(id, name, depID);
            break;
        case 3:
            worker = new Boss(id, name, depID);
            break;
        default:
            break;
        }

        this->m_EmpArray[index] = worker;
        index++;
    }

    this->m_Num = index;
    this->m_isFileEmpty = false;

    ifs.close();
}


// 1 添加
void WorkerManager::addEmp()
{
    cout << "输入需要添加的职工个数：" << endl;

    int addNum;
    cin >> addNum;

    if (addNum > 0)
    {
        int newSize = this->m_Num + addNum;

        // 开辟新空间
        Worker ** empArray = new Worker*[newSize];

        // 把原来的数据拷贝到新数组
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_Num; i++)
            {
                empArray[i] = this->m_EmpArray[i];
            }
        }
        
        // 添加职工信息
        for (int i = 0; i < addNum; i ++)
        {
            int id;
            string name;
            int depID;

            cout << "第 " << i+1 << " 个职工的id：" << endl;
            cin >> id;

            cout << "第 " << i+1 << " 个职工的姓名：" << endl;
            cin >> name;

            cout << "第 " << i+1 << " 个职工的岗位：" << endl;
            cout << "1. 普通职工" << endl;
            cout << "2. 经理" << endl;
            cout << "3. 老板" << endl;
            cin >> depID;

            Worker * worker = NULL;
            switch (depID)
            {
            case 1:
                worker = new Employee(id, name, depID);
                break;
            case 2:
                worker = new Manager(id, name, depID);
                break;
            case 3:
                worker = new Boss(id, name, depID);
                break;
            default:
                break;
            }

            // 保存到数组
            empArray[this->m_Num + i] = worker;
        }

        // 释放原有的空间
        delete[] this->m_EmpArray;

        // 更新指针指向
        this->m_EmpArray = empArray;

        // 更新职工人数
        this->m_Num = newSize;

        this->m_isFileEmpty = false;

        cout << "成功添加 " << addNum << " 名职工！" << endl;

        // 保存文件
        this->save();
    }
    else
    {
        cout << "添加失败" << endl;
        return;
    }

    system("pause");
    system("cls");
}

// 2 显示
void WorkerManager::showEmp()
{
    if (this->m_isFileEmpty)
    {
        cout << "没有职工信息记录" << endl;
    }
    else
    {
        for (int i = 0; i < this->m_Num; i++)
        {
            this->m_EmpArray[i]->showInfo();
        }
    }

    system("pause");
    system("cls");
}

// 判断职工是否存在
int WorkerManager::isEmpExist(int id)
{
    int index = -1;

    for (int i = 0; i < this->m_Num; i++)
    {
        if (this->m_EmpArray[i]->m_Id == id)
            index = i;
    }

    return index;
}

// 3 删除
void WorkerManager::deleteEmp()
{
    cout << "输入需要删除的职工id" << endl;

    int id;
    cin >> id;

    int index = this->isEmpExist(id);

    if (index == -1)
    {
        cout << "职工不存在！" << endl;
    }
    else
    {
        for (int i = index; i < this->m_Num-1; i++)
        {
            this->m_EmpArray[i] = this->m_EmpArray[i+1];
        }
        this->m_EmpArray[this->m_Num] = NULL;

        // 更新状态，保存文件
        this->m_Num--;
        this->save();

        cout << "删除成功" << endl;
    }

    system("pause");
    system("cls");
}

// 修改职工信息
void WorkerManager::modifyEmp()
{
    if (this->m_isFileEmpty)
    {
        cout << "职工信息不存在，修改失败" << endl;
    }
    else
    {
        cout << "请输入修改职工的id：" << endl;
        int id;
        cin >> id;

        int index = this->isEmpExist(id);

        if (index == -1)
        {
            cout << "职工信息不存在，修改失败" << endl;
        }
        else
        {
            int newID;
            string newName;
            int newDepID;

            Worker * worker;

            cout << "新的职工id：" << endl;
            cin >> newID;
            cout << "新的职工Name：" << endl;
            cin >> newName;
            cout << "新的职工岗位号：" << endl;
            cin >> newDepID;

            switch (newDepID)
            {
            case 1:
                worker = new Employee(newID, newName, newDepID);
                break;
            case 2:
                worker = new Manager(newID, newName, newDepID);
                break;
            case 3:
                worker = new Boss(newID, newName, newDepID);
                break;
            default:
                break;
            }

            this->m_EmpArray[index] = worker;

            this->save();

            cout << "修改成功" << endl;
        }

        system("pause");
        system("cls");
    }
}

// 5 查找
void WorkerManager::findEmp()
{
    if (this->m_isFileEmpty)
    {
        cout << "未查到职工信息" << endl;
    }
    else
    {
        int select;
        int result = -1;

        cout << "选择查找方法：1.按id查找 2.按姓名查找" << endl;
        cin >> select;

        if (select == 1)
        {
            int id;

            cout << "请输入职工id：" << endl;
            cin >> id;

            result = this->isEmpExist(id);
        }
        else if (select == 2)
        {
            string name;

            cout << "请输入职工姓名：" << endl;
            cin >> name;

            for (int i = 0; i < this->m_Num; i++)
            {
                if (this->m_EmpArray[i]->m_Name == name)
                {
                    result = i;
                }
            }
        }
        else
        {
            cout << "输入有误，请重新查找" << endl;
        }

        if (result == -1)
        {
            cout << "未查找到职工信息" << endl;
        }
        else
        {
            cout << "已查找到职工，职工信息为：" << endl;
            this->m_EmpArray[result]->showInfo();
        }
    }

    system("pause");
    system("cls");
}

// 6 选择排序
void WorkerManager::sortEmp()
{
    if (this->m_isFileEmpty)
    {
        cout << "没有员工信息记录" << endl;

        system("pause");
        system("cls");
    }
    else
    {
        cout << "请选择排序方式（按照id）：1.升序 2.降序" << endl;
        int select;
        cin >> select;

        // 选择排序
        for (int i = 0; i < this->m_Num-1; i++)
        {
            int minOrMax = i;

            for (int j = i+1; j < this->m_Num; j++)
            {
                if (select == 1)
                {
                    if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
                else
                {
                    if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
            }

            if (i != minOrMax)
            {
                Worker * temp = this->m_EmpArray[i];
                this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
                this->m_EmpArray[minOrMax] = temp;
            }
        }

        this->save();

        cout << "排序成功" << endl;

        this->showEmp();
    }
}

// 7 清空
void WorkerManager::cleanEmp()
{
    cout << "确认清空文件？" << endl;
    cout << "1.确认 2.取消" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        ofstream ofs;
        ofs.open(FILENAME, ios::trunc); // 删除文件后重新创建

        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_Num; i++)
            {
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = NULL;
            }

            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;

            this->m_Num = 0;
            this->m_isFileEmpty = true;

            cout << "成功清空职工信息！" << endl;
        }
    }

    system("pause");
    system("cls");
}