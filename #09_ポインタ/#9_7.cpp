#include <iostream>
using namespace std;

struct Fruits{
    char name[128];
    int price;
    int zaiko;
};

int main(){
    struct Fruits store = {"apple", 150, 50};
    struct Fruits *p;
    p = &store;
    cout << "名前：" << (*p).name << "\n";
    cout << "金額：" << (*p).price << "\n";
    cout << "在庫：" << (*p).zaiko << "\n";
    return 0;
}