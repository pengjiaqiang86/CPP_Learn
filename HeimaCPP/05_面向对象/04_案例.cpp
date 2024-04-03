#include <iostream>
#include <cmath>

using namespace std;

/**
 * 立方体类，包含成员变量边长，要求能够计算立方体面积和体积
 * 并判断两个立方体是否相同
*/

class Cube {
public:
    void setRadius(double r) {
        if (r < 0) {
            return;
        }
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double calcArea() {
        return 6.0 * radius * radius;
    }

    double calcVolume () {
        return pow(radius, 3);
    }

    // 1. 重载==运算符
    bool operator == (Cube& newCube) {
        return newCube.getRadius() == radius;
    }

    // 2. 成员方法
    bool equals(Cube& newCube) {
        return newCube.getRadius() == radius;
    }

private:
    double radius = 0.0;
};

// 3. 全局函数
bool isCubeEqual(Cube& c1, Cube& c2) {
    return c1.getRadius() == c2.getRadius();
}

int main(int argc, char const *argv[])
{
    Cube c1, c2;
    c1.setRadius(1.0);
    c2.setRadius(1.0);

    cout << c1.equals(c2) << endl; // 1
    cout << (c1 == c2) << endl; // 1
    cout << isCubeEqual(c1, c2) << endl; // 1

    system("pause");
    return 0;
}
