#include <iostream>
using namespace std;

class Student{
    public:
        static int grade;
};

int Student::grade = 6;

int main (){
    Student Tarou;
    cout << Tarou.grade << "\n";
    return 0;
}
