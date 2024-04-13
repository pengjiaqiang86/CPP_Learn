#include <iostream>
#include "WorkerManager.h"

WorkerManager::WorkerManager() {}

// Deconstructor
WorkerManager::~WorkerManager() {}

// show menu
void WorkerManager::showMenu()
{
    cout << "==============================================" << endl;
    cout << "=================== Welcome ===================" << endl;
    cout << "=================== 0. Exit System ===================" << endl;
    cout << "=================== 1. Add ===================" << endl;
    cout << "=================== 2. Show ===================" << endl;
    cout << "=================== 3. Delete ===================" << endl;
    cout << "=================== 4. Modify Info ===================" << endl;
    cout << "=================== 5. Search ===================" << endl;
    cout << "=================== 6. Sort ===================" << endl;
    cout << "=================== 7. Clear ===================" << endl;
    cout << "==============================================" << endl;
}

void WorkerManager::exitSystem()
{
    cout << "Exiting System..." << endl;
    system("pause");
    exit(0);
}
