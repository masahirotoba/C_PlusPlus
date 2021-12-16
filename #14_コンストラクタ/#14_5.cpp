#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass();
        NewClass(int x);
};

NewClass::NewClass(){
    cout << "番号が入力されていません\n";
}

NewClass::NewClass(int x){
    num = x;
    cout << "番号は" << num << "です\n";
}

int main (){
    NewClass obj;
    return 0;
}
