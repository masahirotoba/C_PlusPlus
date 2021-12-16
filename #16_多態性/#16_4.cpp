#include <iostream>
using namespace std;

class OldClass{
    public:
        virtual void hello();
};

void OldClass::hello(){
    cout << "OldClassです\n";
}

class NewClass : public OldClass{
    public:
        void hello();
};

void NewClass::hello(){
    cout << "NewClassです\n";
}

int main (){
    NewClass obj;
    obj.hello();
    return 0;
}
