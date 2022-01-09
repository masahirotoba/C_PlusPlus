#include <iostream>
using namespace std;

int main(){
    int apple = 10;
    int *p;
    p = &apple;
    //pの先にあるappleの値を出力
    cout << *p << "\n";
    //pそれ自体のアドレスを出力
    cout << p << "\n";
    return 0;
}