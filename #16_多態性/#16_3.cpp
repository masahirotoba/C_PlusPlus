#include <iostream>
using namespace std;

class NewClass{
    public:
        void hello();
        void hello(string name);
};

void NewClass::hello(){
    cout << "こんにちは\n";
}

void NewClass::hello(string name){
    cout << name << "さん、こんにちは\n";
}

int main (){
    NewClass obj;
    obj.hello("田中");
    return 0;
}
