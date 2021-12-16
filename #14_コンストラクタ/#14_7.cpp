#include <iostream>
using namespace std;

class NewClass{
    public:
        NewClass();
};

NewClass::NewClass(){
    cout << "コンストラクタ\n";
}

int main (){
    NewClass obj1;
    NewClass obj2 = obj1;
    return 0;
}
