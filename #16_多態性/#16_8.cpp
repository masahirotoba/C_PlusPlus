#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak() = 0;
};

class Inu : public Animal{
    public:
        void speak(){
            cout << "わんわん\n";
        };
};

class Neko : public Animal{
    public:
        void speak(){
            cout << "にゃんにゃん\n";
        };
};

int main (){
    Inu inu;
    Neko neko;
    inu.speak();
    neko.speak();
    return 0;
}
