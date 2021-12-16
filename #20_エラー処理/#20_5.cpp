#include <iostream>
using namespace std;

int main(){
    try{
        int num;
        cout << "番号を入力して下さい\n";
        cout << "１：整数、２：小数、３：文字列\n";
        cin >> num;
        if(num == 1)
            throw 1;
        else if(num == 2)
            throw 3.14;
        else
            throw string("文字列");
    }
    catch(int x){
        cout << "int型の整数です\n";
    }
    catch(double y){
        cout << "duble型の小数です\n";
    }
    catch(string x){
        cout << "string型の文字列です\n";
    }
    return 0;
}
