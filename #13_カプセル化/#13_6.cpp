#include <iostream>
using namespace std;

class Student{
    private:
        int num;
    public:
        void setNum(int x);
        int getNum();
};

void Student::setNum(int x){
    if(x > 0 && x < 100)
        num = x;
    else
        num = 0;
}

int Student::getNum(){
    return num;
}

int main (){
    Student Tarou;
    Tarou.setNum(1125);
    cout << Tarou.getNum() << "\n";
    return 0;
}