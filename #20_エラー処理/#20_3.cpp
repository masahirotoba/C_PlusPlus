#include <iostream>
using namespace std;

int main (){
    try{
        throw 1;
    }
    catch(int x){
        cout << "throwと()内は同じデータ型\n";
    }
    return 0;
}
