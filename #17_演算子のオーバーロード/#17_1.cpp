#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass operator+(NewClass obj);
};

NewClass NewClass::operator+(NewClass obj){
    NewClass tmp;
    tmp.num = num + obj.num;
    return tmp; 
}

int main (){
    NewClass obj1, obj2, result;
    obj1.num = 10;
    obj2.num = 20;
    result = obj1.operator+(obj2);
    cout << result.num << "\n";
    return 0;
}