#include <iostream>
using namespace std;

class OldClass{
    protected:
        int num;
};

class NewClass : public OldClass{
    public:
        void setNum(int x);
};

void NewClass::setNum(int x){
    num = x;
    cout << num << "\n";
}

int main (){
    NewClass obj;
    obj.setNum(10);
    return 0;
}