#include <iostream>
using namespace std;

struct Student{
    int year;
    char name[64];
    double weight;
    double height;
}Tarou, Hanako;

int main(){
    struct Student Yamada;
    Tarou.year = 10;
    Hanako.year = 12;
    cout << "Tarouの年齢：" << Tarou.year << "\n";
    cout << "Hanakoの年齢：" << Hanako.year << "\n";
    return 0;
}