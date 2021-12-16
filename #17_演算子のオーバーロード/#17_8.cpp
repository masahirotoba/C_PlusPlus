#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass(int x){
            num = x;
        };
        friend NewClass operator+(int x, NewClass y);
};

NewClass operator+(int x, NewClass y){
    NewClass tmp(0);
    tmp.num = x + y.num;
    return tmp;
}

int main (){
    NewClass obj(10);
    NewClass result(0);
    result = 10 + obj;
    cout << result.num << "\n";
    return 0;
}
