#include <iostream>
using namespace std;

class Newclass{
    public:
        Newclass();
};

Newclass::Newclass(){
    cout << "オブジェクトを作るだけで発動します\n";
}

int main (){
    Newclass obj;
    return 0;
}
