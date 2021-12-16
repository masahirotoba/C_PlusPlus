#include <iostream>
using namespace std;

class OldClass{
    public:
        OldClass();
        OldClass(int x);
};

OldClass::OldClass(){
    cout << "引数がないパターン\n";
}

OldClass::OldClass(int x){
    cout << x << "：引数があるパターン\n";
}

class NewClass : public OldClass{
    public:
        NewClass();
};

NewClass::NewClass() : OldClass(10){
    cout << "派生クラスのコンストラクタ\n";
}

int main (){
    NewClass obj;
    return 0;
}
