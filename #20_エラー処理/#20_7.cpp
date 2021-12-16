#include <iostream>
using namespace std;

int judge(int x) throw(string){
    if(x < 0 || x > 150)
        throw string ("エラーです\n");
    else if(x < 20)
        return 1000;
    else
        return 2000;
}

int main(){
    try{
        int year;
        cout << "年齢を入力して下さい\n";
        cin >> year;
        int result = judge(year);
        cout << result << "円です\n";
    }catch(string ex){
        cout << ex;
    }
    return 0;
}