#include <iostream>
#include "WorkerManager.h"
#include "worker.h"

using namespace std;

int main(int argc, char const *argv[])
{
    WorkerManager wm = WorkerManager();
    
    int choice;

    while (true)
    {
        wm.showMenu();

        cout << "Input Your Choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
        wm.exitSystem();
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            system("cls");
            break;
        }
    }

    system("pause");
    return 0;
}