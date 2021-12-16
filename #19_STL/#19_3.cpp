#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i;
    int num;
    vector<int> array;
    cout << "要素数はいくつですか？";
    cin >> num;
    for(i = 0; i < num; i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    cout << "入力した数はこちらです\n";
    vector<int>::iterator it = array.begin();
    while(it != array.end()){
        cout << *it;
        cout << "、";
        it++;
    }
    cout << "\n";
}
