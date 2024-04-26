#pragma once
#include <iostream>

using namespace std;


template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        cout << "Constructor with parameters" << endl;
        this->m_Size = 0;
        this->m_Capacity = capacity;
        this->ptrArray = new T[capacity];
    }

    MyArray(const MyArray &myArray)
    {
        cout << "Copy constructor" << endl;
        this->m_Size = myArray.m_Size;
        this->m_Capacity = myArray.m_Capacity;

        this->ptrArray = new T[myArray.m_Capacity];
        for (int i = 0; i < myArray.m_Size; i++)
        {
            this->ptrArray[i] = myArray.ptrArray[i];
        }
    }

    ~MyArray()
    {
        cout << "De-constructor" << endl;
        // for (int i = 0; i < this->m_Size; i++)
        // {
        //     if (this->ptrArray[i] != NULL)
        //     {
        //         delete this->ptrArray[i];
        //         this->ptrArray[i] = NULL;
        //     }
        // }

        if (this->ptrArray != NULL)
        {
            delete[] this->ptrArray;
            this->ptrArray = NULL;
        }
    }

    // bool operator==(MyArray &myArray)
    // {
    //     for (int i = 0; i < myArray.m_Size; i++)
    //     {
    //         if (this->ptrArray[i] != myArray[i])
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    MyArray& operator=(const MyArray &myArray)
    {
        cout << "Operator =" << endl;
        if (this->ptrArray != NULL)
        {
            delete[] this->ptrArray;
            this->ptrArray = NULL;
            this->m_Size = 0;
            this->m_Capacity = 0;
        }

        this->m_Size = myArray.m_Size;
        this->m_Capacity = myArray.m_Capacity;

        this->ptrArray = new T[myArray.m_Capacity];
        for (int i = 0; i < myArray.m_Size; i++)
        {
            this->ptrArray[i] = myArray.ptrArray[i];
        }

        return *this;
    }

    T& operator[](int index)
    {
        if (index < this->m_Capacity && index >= 0)
        {
            return ptrArray[index];
        }
        else
        {
            throw out_of_range("Array index out of bound.");
        }
    }

    void append(T &newElement)
    {
        if (this->m_Size == this->m_Capacity)
        {
            cout << "Array is full, append failed." << endl;
            return;
        }

        this->ptrArray[this->m_Size] = newElement;
        this->m_Size += 1;
    }

    void pop()
    {
        if (this->m_Size > 0)
        {
            // if (this->ptrArray[m_Size-1] != NULL)
            // {
            //     delete this->ptrArray[m_Size-1];
            //     this->ptrArray[m_Size-1] = NULL;
            // }

            this->m_Size -= 1;
        }
        else
        {
            cout << "Arr ay has no element, pop failed." << endl;
            return;
        }
    }

    int getCapacity()
    {
        return this->m_Capacity;
    }

    int getSize()
    {
        return this->m_Size;
    }

private:
    T *ptrArray;
    int m_Capacity;
    int m_Size;
};
