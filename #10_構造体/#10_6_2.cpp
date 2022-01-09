#include <iostream>
using namespace std;

typedef struct{
    int apple;
    int orange;
    int banana;
}Fruits;

int main(){
    Fruits store;
    store.apple = 100;
    cout << "リンゴの金額：" << store.apple << "\n";
    return 0;
}