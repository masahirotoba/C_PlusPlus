#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        friend void show(NewClass *p);
};

void show(NewClass *p){
    cout << (*p).num << "\n";
}

int main (){
    NewClass obj;
    obj.num = 10;
    show(&obj);
    return 0;
}