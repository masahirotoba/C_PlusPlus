#include <iostream>
using namespace std;

class Point{
    public:
        int x;
        int y;
        Point(int a, int b);
        Point operator+(Point obj);
};

Point::Point(int a, int b){
    x = a;
    y = b;
}

Point Point::operator+(Point obj){
    Point tmp(0, 0);
    tmp.x = x + obj.x;
    tmp.y = y + obj.y;
    return tmp;
}

int main (){
    Point p1(10, 20);
    Point p2(20, 30);
    Point p3(0, 0);
    p3 = p1 .operator+ (p2);
    cout << "X座標：" << p3.x << "\n";
    cout << "Y座標：" << p3.y << "\n";
    return 0;
}
