#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak() = 0;
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "わんわん\n";
        };
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "にゃんにゃん\n";
        };
};

int main (){
    int i;
    Animal *p[2];
    Dog inu;
    p[0] = &inu;
    Cat neko;
    p[1] = &neko;
    for(i = 0; i < 2; i++){
        (*p[i]).speak();
    }
    return 0;
}
