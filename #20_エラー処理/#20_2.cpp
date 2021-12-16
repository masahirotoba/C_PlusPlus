#include <iostream>
using namespace std;

int judge(int x){
    if(x < 0 || x > 150)
        return -1;
    else if(x < 20)
        return 1;
    else
        return 2;
}

int main(){
    int year;
    cout << "年齢を入力して下さい\n";
    cin >> year;
    int result = judge(year);
    if(result == -1)
        cout << "エラーです\n";
    else if(result == 1)
        cout << "1000円です\n";
    else
        cout << "2000円です\n";
    return 0;
}
