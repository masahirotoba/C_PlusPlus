#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int i;
    vector<int> array;
    cout << "数を５つ入力して下さい\n";
    for(i = 0; i < 5; i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    cout << "■入力した数\n";
    for(i = 0; i < 5; i++){
        cout << array[i] << "、";
    }
    cout << "\n";
    sort(array.begin(), array.end());
    cout << "■ソート後\n";
    for(i = 0; i < 5; i++){
        cout << array[i] << "、";
    }
    return 0;
}
