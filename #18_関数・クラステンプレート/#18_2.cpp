#include <iostream>
using namespace std;

template <class T>
T nibai(T x){
    x *= 2;
    return x;
}

int main(){
    cout << nibai(3.14) << "\n";
    return 0;
}
