#include <iostream>
#include "02_WorkerManager.h"
#include "02_Worker.h"

using namespace std;

int main(int argc, char const *argv[])
{
    WorkerManager wm = WorkerManager();
    
    int choice;

    while (true)
    {
        wm.showMenu();

        cout << "请输入：" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            wm.exitSystem();
            break;
        case 1:
            wm.addEmp();
            break;
        case 2:
            wm.showEmp();
            break;
        case 3:
            wm.deleteEmp();
            break;
        case 4:
            wm.modifyEmp();
            break;
        case 5:
            wm.findEmp();
            break;
        case 6:
            wm.sortEmp();
            break;
        case 7:
            wm.cleanEmp();
            break;
        default:
            system("cls");
            break;
        }
    }

    system("pause");
    return 0;
}