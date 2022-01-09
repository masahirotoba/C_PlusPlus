#include <iostream>
using namespace std;

struct Fruits{
    int apple;
    int orange;
    int banana;
};

void price(struct Fruits store1);

int main(){
    struct Fruits store1 = {100, 200, 300};
    price(store1);
    return 0;
}

void price(struct Fruits store1){
    cout << "リンゴの金額：" << store1.apple << "\n";
    cout << "オレンジの金額：" << store1.orange << "\n";
    cout << "バナナの金額：" << store1.banana << "\n";
}