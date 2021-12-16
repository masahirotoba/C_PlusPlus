#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, string> obj;
    obj.insert(make_pair("リンゴ", "apple"));
    obj.insert(make_pair("オレンジ", "orange"));
    obj.insert(make_pair("バナナ", "banana"));
    string word;
    cout << "英語に翻訳します\n";
    cin >> word;
    cout  << obj[word] << "\n";
    return 0;
}
