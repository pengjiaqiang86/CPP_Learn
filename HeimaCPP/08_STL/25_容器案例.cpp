#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   25_容器案例.cpp
 * @time    :   2024/05/01 23:45:22
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
案例描述
    5名选手，10名评委分别打分，去除最高分和最低分，取平均分
*/


class Person
{
public:
    Person(string name, int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }

public:
    string m_Name;
    int m_Score;
};

void printVector(const vector<Person> &vec)
{
    for (vector<Person>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << (*iter).m_Name << "  " << (*iter).m_Score << endl;
    }
}

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator iter = deq.begin(); iter != deq.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // 创建选手
    vector<Person> vec;

    string nameSeed = "ABCDE";
    for (int i = 0; i < nameSeed.length(); i++)
    {
        string name = "Candidate ";
        name += nameSeed[i];
        
        Person p(name, 0);
        vec.push_back(p);
    }

    printVector(vec);

    // 打分
    srand(12);

    for (vector<Person>::iterator vecIter = vec.begin(); vecIter != vec.end(); vecIter++)
    {
        // 评委的分数放入deque容器
        deque<int> deq;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60; // 60 ~ 100
            deq.push_back(score);
        }
        
        // 排序
        sort(deq.begin(), deq.end());

        // 最大最小
        int min = deq.front();
        int max = deq.back();

        int sum = 0;
        int count = 0;
        for (deque<int>::iterator deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
        {
            if ((*deqIter) != min && (*deqIter) != max)
            {
                sum += (*deqIter);
                count += 1;
            }
        }
        
        // 计算平均分
        int avg = sum / count;

        (*vecIter).m_Score = avg;
    }

    // 显示得分
    printVector(vec);

    system("pause");
    return 0;
}
