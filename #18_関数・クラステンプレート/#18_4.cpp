#include <iostream>
using namespace std;

template <class T>
class Sankaku{
    public:
        T teihen;
        T takasa;
        Sankaku(T x, T y){
            teihen = x;
            takasa = y;
        }
        T keisan(){
            return teihen * takasa / 2;
        }
};

int main(){
    Sankaku<int> x(10, 20);
    Sankaku<double> y(10.0, 20.0);
    cout << "int型の三角形：" << x.keisan() << "\n";
    cout<< "double型の三角形：" << y.keisan() << "\n";
}