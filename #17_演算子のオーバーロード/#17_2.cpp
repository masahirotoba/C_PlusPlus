#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        int operator+(int x);
};

int NewClass::operator+(int x){
    int tmp;
    tmp = num + x;
    return tmp;
}

int main (){
    int result;
    NewClass obj;
    obj.num = 10;
    result = obj.operator+(20);
    //result = obj + 20;
    cout << result << "\n";
    return 0;
}
