#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i;
    int num;
    vector<int> array;
    cout << "要素数はいくつにしますか？\n";
    cin >> num;
    for(i = 0; i < num; i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    cout << "入力した数はこちらです\n";
    for(i = 0; i < num; i++){
        cout << array[i] << "、";
    }
    cout << "\n";
    return 0;
}
