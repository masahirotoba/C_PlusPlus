#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass();
        NewClass operator++();
};

NewClass::NewClass(){
    num = 0;
}

NewClass NewClass::operator++(){
    NewClass tmp;
    ++num;
    tmp.num = num;
    return tmp;
}

int main (){
    NewClass obj1, result;
    result = ++obj1;
    result = obj1.operator++();
    cout << result.num << "\n";
    return 0;
}
