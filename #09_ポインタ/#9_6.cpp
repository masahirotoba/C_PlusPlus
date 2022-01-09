#include <iostream>
using namespace std;

void keisan(int n1, int n2, int *tasu, int *hiku){
    *tasu = n1 + n2;
    *hiku = n1 - n2;
}

int main(){
    int num1 = 30;
    int num2 = 10;
    int tasizan = 0;
    int hikizan = 0;
    keisan(num1, num2, &tasizan, &hikizan);
    cout << "足し算の結果：" << tasizan << "\n";
    cout << "引き算の結果：" << hikizan << "\n";
    return 0;
}