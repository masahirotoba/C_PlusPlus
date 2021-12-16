#include <iostream>
using namespace std;

class Student{
    public:
        virtual void hello(){
            cout << "自己紹介をどうぞ\n";
        };
};

class Tanaka : public Student{
    public:
        void hello(){
            cout << "田中です\n";
        };
};

int main (){
    Tanaka tanaka;
    tanaka.hello();
    return 0;
}
