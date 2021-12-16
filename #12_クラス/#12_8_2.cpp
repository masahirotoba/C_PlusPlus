#include <iostream>
using namespace std;

class Studnet{
    public:
        int num;
        int year;
};

void show(Studnet *p){
    (*p).num = 20;
    (*p).year = 20;
    cout << (*p).num << "\n";
    cout << (*p).year << "\n";
}

int main (){
    Studnet Tanaka;
    Tanaka.num = 10;
    Tanaka.year = 10;
    show(&Tanaka);
    return 0;
}