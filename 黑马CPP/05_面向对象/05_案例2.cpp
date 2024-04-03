#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

/*
案例2：实现点和圆类，并实现用于判断点和圆之间的位置关系的成员方法
将Point类和Circle写入其他文件，在头文件中声明，在本文件中使用
    命令`g++ 05_案例2.cpp point.cpp circle.cpp -I . -o 05.exe & 05`
    > 如果不加point.cpp和circle.cpp会报如下的错误：
    > C:\Temp\cc4MQjfW.o:05_案例2.cpp:(.text+0x20): undefined reference to `Point::setX(double)'
    > ...
*/

int main(int argc, char const *argv[])
{
    Point p1, p2, p3;
    Circle circle;

    p1.setX(0.0);
    p1.setY(0.0);

    p2.setX(1.0);
    p2.setY(0.0);

    p3.setX(3.0);
    p3.setY(4.0);

    circle.setCenter(p1);
    circle.setRadius(1.0);

    cout << circle.relativePosition(p2) << endl; // 1
    cout << circle.relativePosition(p3) << endl; // 2

    system("pause");
    return 0;
}
