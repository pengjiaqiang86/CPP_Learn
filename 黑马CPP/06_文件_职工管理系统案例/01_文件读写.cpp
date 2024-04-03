#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
C++�����ļ���д��������Ҫ����ͷ�ļ�<fstream>

�ļ���Ϊ���ı��ļ��Ͷ������ļ�

�ļ�������Ϊ��ofstreamд������ifstream��������fstream��д����

�ļ��򿪷�ʽ��
    ios::in Ϊ���ļ������ļ�
    ios::out Ϊд�ļ������ļ�
    ios::ate ��ʼλ�ã��ļ�β��
    ios::app ׷�ӵķ�ʽд�ļ�
    ioa::trunc ����ļ����ڣ���ɾ�����ٴ���
    ios::binary �����Ʒ�ʽ
    ios::binary | ios::out�����ַ���һ��ʹ��
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
    
    // �ж��Ƿ�ɹ����ļ�
    if (ifs.is_open()) {
        // ��һ�ִ򿪷�ʽ (�ո�����ɻ���)
        // char buf[1024] = {0};
        // while (ifs >> buf) {
        //     cout << buf << endl;
        // }
    
        // �ڶ��ִ򿪷�ʽ
        // char buf[1024] = {0};
        // while (ifs.getline(buf, 1024)) {
        //     cout << buf << endl;
        // }

        // �����ִ򿪷�ʽ
        // ʹ��getlineȫ�ֺ�������Ҫ����stringͷ�ļ�
        // string buf;
        // while (getline(ifs, buf)) {
        //     cout << buf << endl;
        // }

        // �����ִ򿪷�ʽ (���Ƽ�)
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
    char m_Name[32]; // д���ļ�ʱ�������Ƽ���char����string����������
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
