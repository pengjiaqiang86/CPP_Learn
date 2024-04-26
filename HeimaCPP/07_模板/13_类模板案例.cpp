#include <iostream>
#include "13_MyArray.hpp"

using namespace std;

/*
2024年4月25日14:28:27

案例描述：

可以对内置数据类型以及自定义数据类型的数据进行存储
将数组中的数据存储到堆区
构造函数可以传入数组的容量
提供相应的拷贝构造函数以及operator=防止浅拷贝问题
提供尾插法和尾删法对数组中的数据进行增加和删除
可以通过下标的方式访问数组中的元素
可以获取数组中当前元素的个数和数组的容量

private:
    T *ptrArray
    int m_Capacity
    int m_Size
public:
    构造函数（容量
    拷贝构造
    operator=
    下标访问
    尾插法 尾删法
    获取数组容量
    获取数组大小
*/

class Person
{
public :
    Person()
    {}

    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void printInfo()
    {
        cout << "Name = " << this->m_Name << "\t";
        cout << "Age = "  << this->m_Age  << endl;
    }

public:
    string m_Name;
    int m_Age;
};


void test1()
{
    // 构造函数
    MyArray<Person> myArray1(8);

    // 拷贝构造函数
    MyArray<Person> myArray2(myArray1);

    // operator=
    MyArray<Person> myArray3(16);
    myArray3 = myArray1;

    cout << "Capacity : " << myArray3.getCapacity() << endl;
    cout << "Size : " << myArray3.getSize() << endl;
}

void test2()
{
    MyArray<Person> myArray(8);
    cout << "Capacity : " << myArray.getCapacity() << endl;
    cout << "Size : " << myArray.getSize() << endl;

    cout << "-----------------------------" << endl;

    Person p1("p1", 1);
    Person p2("p2", 2);
    Person p3("p3", 3);

    myArray.append(p1);
    myArray.append(p2);
    myArray.append(p3);

    cout << "Capacity : " << myArray.getCapacity() << endl;
    cout << "Size : " << myArray.getSize() << endl;

    for (int i = 0; i < myArray.getSize(); i++)
    {
        myArray[i].printInfo();
    }

    cout << "-----------------------------" << endl;

    myArray.pop();
    
    for (int i = 0; i < myArray.getSize(); i++)
    {
        myArray[i].printInfo();
    }

    cout << "-----------------------------" << endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
