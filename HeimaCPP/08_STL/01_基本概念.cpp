#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
STL standard template library 标准模板库
广义上可以划分为 容器（Container）、算法（Algorithm）和迭代器（Iterator）
容器和算法通过迭代器进行无缝连接
STL几乎所有的代码都采用了模板类或者模板函数

STL六大组件：
容器、算法、迭代器、仿函数、适配器、空间配置器

容器是将运用最广泛的一些数据结构（数组、列表、树、栈、队列、集合、映射表等）实现出来
    这些容器分为：
        序列式容器：强调值的排序，每个元素都有固定位置
        关联式容器：二叉树结构，各个元素没有严格的物理上的顺序关系

算法是在有限的步骤内解决逻辑或数学上的问题
    算法分为：
        质变算法：运算过程中会改变区间内的元素的内容，如拷贝、替换和删除等
        非质变算法：运算过程中不会更改区间内元素的内容，例如查找、计数、遍历和寻找极值等
    算法主要由头文件<algorithm> <functional> <numeric>组成
        algorithm是所有STL头文件中最大的一个，设计比较、交换、查找、遍历、复制和修改等
        functional定义了一系列模板类，用于声明函数对象
        numeric体积很小，只包含几个在序列上进行简单数学运算的模板函数

迭代器：容器和算法之间的粘合剂
    提供一种方法，使之能够依顺序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式
    每个容器都有自己专属的迭代器
    分为：输入迭代器、输出迭代器、前向迭代器、双向迭代器和随机访问迭代器
*/

template<typename T>
void print(T ele)
{
    cout << ele << endl;
}

void test1()
{
    // 创建容器
    vector<int> v;

    // 插入数据
    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    // 第一种遍历
    // vector<int>::iterator iterBegin = v.begin(); // 指向第一个元素
    // vector<int>::iterator iterEnd   = v.end(); // 指向最后一个元素的下一个位置
    
    // while(iterBegin != iterEnd)
    // {
    //     cout << *iterBegin << endl;
    //     iterBegin++;
    // }

    // 第二种遍历
    // for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
    // {
    //     cout << *iter << endl;
    // }

    // 第三种遍历
    for_each(v.begin(), v.end(), print<int>);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
