#include <iostream>
using namespace std;

class OldClass{
    public:
        int num;
        void show();
};

void OldClass::show(){
    cout << num << "\n";
}

class NewClass : public OldClass{

};

int main (){
    NewClass obj;
    obj.num = 10;
    obj.show();
    return 0;
}
