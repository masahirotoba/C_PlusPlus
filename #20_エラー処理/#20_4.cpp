#include <iostream>
using namespace std;

int main(){
    try{
        int num;
        cout << "数値を入力して下さい\n";
        cin >> num;
        if(num >= 0 && num <= 10)
            cout << "0~10の間です\n";
        else
            throw 1;
    }catch(int x){
        cout << "範囲外です\n";
    }
}
