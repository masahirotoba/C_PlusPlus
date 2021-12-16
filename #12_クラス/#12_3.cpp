#include <iostream>
using namespace std;

class Studnet{
    public:
        int num;
        int year;
        void show(){
            cout << num << "\n";
            cout << year << "\n";
        }
};

int main (){
    class Studnet Tanaka;
    Tanaka.num = 10;
    Tanaka.year = 12;
    Tanaka.show();
    return 0;
}
