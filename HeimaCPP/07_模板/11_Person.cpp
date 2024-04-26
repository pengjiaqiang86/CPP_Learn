#include "11_Person.h"


template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template<typename T1, typename T2>
void Person<T1, T2>::showInfo()
{
    cout << "Name = " << this->m_Name << "\t";
    cout << "Age = "  << this->m_Age  << endl;
}