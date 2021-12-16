#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> obj;
    obj.push(12);
    obj.push(24);
    obj.push(35);
    cout << "キューで整列しました\n";
    while(!obj.empty()){
        cout << obj.front() << "、";
        obj.pop();
    }
}
