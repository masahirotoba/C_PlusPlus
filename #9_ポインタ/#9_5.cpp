#include <iostream>
using namespace std;

void keisan(int *x){
    *x = 25;
}

int main(){
    int apple = 10;
    cout << "1回目：" << apple << "\n";

    keisan(&apple);

    cout << "書き換えました\n";
    cout << "2回目：" << apple << "\n";
    return 0;
}