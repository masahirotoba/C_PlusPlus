#include <iostream>
using namespace std;

class Studnet{
    public:
        int num;
};

class Tanaka: public Studnet{
    public:
       Tanaka(int x){
           num = x;
       };
};

class Satou: public Studnet{
    public:
       Satou(int x){
           num = x;
       };
};

int main (){
    Satou satou(20);
    Tanaka tanaka(10);
    Studnet *p[2];
    p[0] = &tanaka;
    p[1] = &satou;
    int i;
    for(i = 0; i < 2; i++){
        cout << (*p[i]).num << "\n";
    }
    return 0;
}