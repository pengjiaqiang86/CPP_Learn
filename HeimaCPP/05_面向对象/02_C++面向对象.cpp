#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Student {
public:
    void setID(string id) {
        m_id = id;
    }

    string getID() {
        return m_id;
    }

    void setName(string name) {
        m_name = name;
    }

    string getName() {
        return m_name;
    }

    void info() {
        cout << "ID: " << m_id << endl;
        cout << "Name: " << m_name << endl;
    }

private:
    string m_id;
    string m_name;
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.setID("Student1'ID");
    s1.setName("Student1'Name");
    s1.info();

    system("pause");
    return 0;
}
