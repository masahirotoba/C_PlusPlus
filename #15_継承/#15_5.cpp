#include <iostream>
using namespace std;

class OldClass{
    public:
        OldClass(){
            cout << "基本クラスのコンストラクタ\n";
        };
};

class NewClass : protected OldClass{
    public:
        NewClass(){
            cout << "派生クラスのコンストラクタ\n";
        };
};

int main (){
    NewClass obj;
    return 0;
}