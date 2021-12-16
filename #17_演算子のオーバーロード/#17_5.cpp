#include <iostream>
using namespace std;

class Point{
    public:
        int x;
        int y;
        Point(int a, int b);
        bool operator>(Point obj);
};

Point::Point(int a, int b){
    x = a;
    y = b;
}

bool Point::operator>(Point obj){
    if(x > obj.x && y > obj.y)
        return true;
        else return false;
}

int main (){
    Point p1(10, 20);
    Point p2(30, 40);
    if(p2 > p1){
        cout << "p2の方が離れています\n";
    }
    return 0;
}
