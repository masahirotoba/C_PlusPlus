#include <iostream>
using namespace std;

class NewClass{
    public:
        NewClass();
        ~NewClass();
};

NewClass::NewClass(){
    cout << "コンストラクタ\n";
}

NewClass::~NewClass(){
    cout << "デストラクタ\n";
}

int main (){
    NewClass obj;
    return 0;
}