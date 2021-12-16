#include <iostream>
using namespace std;

class OldClass{
    protected:
        int num;
};

class NewClass : public OldClass{
};

int main (){
    NewClass obj;
    obj.num = 10;
    return 0;
}
