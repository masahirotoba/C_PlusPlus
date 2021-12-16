#include <iostream>
using namespace std;

class NewClass{
    public:
    NewClass();
    NewClass(const NewClass &obj);
};

NewClass::NewClass(){
    cout << "コンストラクタ\n";
}

NewClass::NewClass(const NewClass &obj){
    cout << "コピーコンストラクタ\n";
}

int main(){
    NewClass apple;
    NewClass orange = apple;
    return 0;
}

