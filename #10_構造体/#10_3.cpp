#include <iostream>
using namespace std;

struct Fruits{
    int apple;
    int orange;
    int banana;
};

int main(){
    struct Fruits store1 = {100, 200, 300};
    struct Fruits store2 = {200, 400, 500};
    struct Fruits store3;
    store3 = store1;
    cout << "リンゴの金額：" << store3.apple << "\n";
    cout << "オレンジの金額：" << store3.orange << "\n";
    cout << "バナナの金額：" << store3.banana << "\n";
    return 0;
}