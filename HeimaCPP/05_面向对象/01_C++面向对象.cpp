#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Point
{
public:
    double x, y;
};

class Line
{
public:
    Point p1;
    Point p2;

    vector<Point> getPoint() {
        pList.push_back(p1);
        pList.push_back(p2);
        return pList;
    }

    double getDistance() {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

private:
    vector<Point> pList;
};


int main(int argc, char const *argv[])
{
    Point p1, p2;
    p1.x = 0;
    p1.y = 0;
    p2.x = 3;
    p2.y = 4;

    Line line;
    line.p1 = p1;
    line.p2 = p2;

    double dist = line.getDistance();
    cout << dist << endl;

    vector<Point> pList = line.getPoint();
    for (Point p : pList) {
        cout << p.x << " " << p.y << endl;
    }

    system("pause");
    return 0;
}
