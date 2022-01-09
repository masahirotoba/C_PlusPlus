#include <iostream>
using namespace std;

struct Student{
    int year;
    char name[64];
    double weight;
    double height;
};

int main(){
    struct Student Tarou;
    Tarou.year = 10;
    cout << Tarou.year << "\n";
    return 0;
}