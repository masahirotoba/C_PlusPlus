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
    num = x;
}

int Student::getNum(){
    return num;
}

int main (){
    int result;
    Student Tarou;
    Tarou.setNum(10);
    result = Tarou.getNum();
    cout << result << "\n";
    return 0;
}