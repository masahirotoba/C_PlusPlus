#include <iostream>
using namespace std;

class OldClass;

class NewClass{
    public:
        int num;
        NewClass(int x){
            num = x;
        };
        friend void keisan(NewClass *p1, OldClass *p2);
};

class OldClass{
    public:
        int num;
        OldClass(int y){
            num = y;
        };
        friend void keisan(NewClass *p1, OldClass *p2);
};

void keisan(NewClass *p1, OldClass *p2){
    cout << (*p1).num + (*p2).num << "\n";
}

int main (){
    NewClass obj1(10);
    OldClass obj2(20);
    keisan(&obj1, &obj2);
    return 0;
}