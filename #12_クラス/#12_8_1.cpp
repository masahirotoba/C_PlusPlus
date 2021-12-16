#include <iostream>
using namespace std;

class Studnet{
    public:
        int num;
};

void show(Studnet x){
    cout << x.num << "\n";
}

int main (){
    Studnet Tanaka;
    Tanaka.num = 10;
    show(Tanaka);
    return 0;
}
