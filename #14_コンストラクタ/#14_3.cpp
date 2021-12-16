#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        Student();
};

Student::Student(){
    num = 10;
}

int main (){
    Student Tarou;
    cout << Tarou.num << "\n";
    return 0;
}
