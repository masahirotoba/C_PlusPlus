#include <iostream>
using namespace std;

class Human{
    public:
        void show(){
            cout << "共通の基本クラス\n";
        }
};
class Father : public virtual Human {};
class Mother : public virtual Human {};
class Child : public Father, public Mother {};

int main (){
    Child obj;
    obj.show();
    return 0;
}
