#include <iostream>
using namespace std;

int main (){
    try{
        int num;
        cout << "0~10の間で数値を入力して下さい";
        cin >> num;
        if(num >= 0 && num <= 10)
            cout << "0~10の間です\n";
        else if(num < 0)
            throw string("0より小さいです\n");
        else
            throw string("10より大きいです\n");        
    }
    catch(string x){
        cout << x;
    }
}
