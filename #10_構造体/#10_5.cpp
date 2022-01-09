#include <iostream>
#include <iomanip>
using namespace std;

struct Test{
    char name[32];
    int kokugo;
    int sansu;
    int eigo;
};

struct Test student[3] = {
    {"太郎", 40, 50, 60},
    {"二郎", 55, 65, 70},
    {"三郎", 70, 80, 90}
};

void show();
void line();

int main(){
    cout << "名前" << setw(8) << "国語" << setw(8) << "算数" << setw(8) << "英語" << "\n"; 
    line();
    show();
    line();
    return 0;
}

void line(){
    int i;
    for(i = 0; i < 50; i++){
        cout << "-"; 
    }
    cout << "\n";
}

void show(){
    int i;
    for(i = 0; i < 3; i++){
        cout << student[i].name << setw(5) << student[i].kokugo << setw(5) << student[i].sansu << setw(5) << student[i].eigo << "\n";
    }
}