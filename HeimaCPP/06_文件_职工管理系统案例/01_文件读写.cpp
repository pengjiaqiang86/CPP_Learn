#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
C++进行文件读写操作，需要包含头文件<fstream>

文件分为：文本文件和二进制文件

文件操作分为：ofstream写操作、ifstream读操作、fstream读写操作

文件打开方式：
    ios::in 为读文件而打开文件
    ios::out 为写文件而打开文件
    ios::ate 初始位置：文件尾部
    ios::app 追加的方式写文件
    ioa::trunc 如果文件存在，先删除，再创建
    ios::binary 二进制方式
    ios::binary | ios::out：两种方法一起使用
*/

void writeTxt() {
    cout << "Write to file" << endl;

    ofstream ofs;
    ofs.open("write_to_txt.txt", ios::out);
    ofs << "This is plain text." << endl;
    ofs << "This is the second line of the file." << endl;
    ofs.close();
}

void readTxt() {
    cout << "Read file" << endl;

    ifstream ifs;
    ifs.open("write_to_txt.txt", ios::in);
    
    // 判断是否成功打开文件
    if (ifs.is_open()) {
        // 第一种打开方式 (空格输出成换行)
        // char buf[1024] = {0};
        // while (ifs >> buf) {
        //     cout << buf << endl;
        // }
    
        // 第二种打开方式
        // char buf[1024] = {0};
        // while (ifs.getline(buf, 1024)) {
        //     cout << buf << endl;
        // }

        // 第三种打开方式
        // 使用getline全局函数，需要包含string头文件
        // string buf;
        // while (getline(ifs, buf)) {
        //     cout << buf << endl;
        // }

        // 第四种打开方式 (不推荐)
        // char c;
        // while ( (c = ifs.get()) != EOF ) {
        //     cout << c;
        // }

    } else {
        cout << "Failed to load file." << endl;
    }

    ifs.close();
}

class Person {
public:
    char m_Name[32]; // 写入文件时，这里推荐用char，用string可能有问题
    int m_Age;
};

void writeBinary() {
    cout << "Write to binary file." << endl;

    Person person = {"Tom", 6};

    ofstream ofs;
    ofs.open("write_to_binary.bin", ios::out | ios::binary);
    ofs.write((const char *)&person, sizeof(Person));
    ofs.close();
}

void readBinary() {
    cout << "Read binary file." << endl;

    Person person;

    ifstream ifs;
    ifs.open("write_to_binary.bin", ios::in | ios::binary);

    if (ifs.is_open()) {
        ifs.read((char *)&person, sizeof(Person));
    } else {
        cout << "Failed to load file." << endl;
    }

    ifs.close();

    cout << "Name: " << person.m_Name << " Age: " << person.m_Age << endl;
}

int main(int argc, char const *argv[])
{
    // writeTxt();
    // readTxt();

    writeBinary();
    readBinary();

    system("pause");
    return 0;
}
