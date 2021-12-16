#include <iostream>
#include "sample.h"
using namespace std;

void Studnet::show(){
    cout << num << "\n";
    cout << year << "\n";
}

int main (){
    class Studnet Tanaka;
    Tanaka.num = 10;
    Tanaka.year = 12;
    Tanaka.show();
    return 0;
}
