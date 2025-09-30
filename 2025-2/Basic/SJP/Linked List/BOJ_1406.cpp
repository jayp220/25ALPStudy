#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string text;
    int N;
    cin >> text >> N;

    list<char> result;
    for (char c : text){
        result.push_back(c);
    }
    auto cursor = result.end();

    while (N > 0){
        string command;
        cin >> command;

        if (command == "L"){
            if (cursor != result.begin()){
                --cursor;
            }
        }

        else if (command == "D"){
            if (cursor != result.end())
                ++cursor;
        }

        else if (command == "B"){
            if (cursor != result.begin()){
                --cursor;
                cursor = result.erase(cursor); // erase가 반환하는 새 iterator 받기
            }
        }
        
        else{
            char x; // white space를 만나면 cin이 멈춤
            cin >> x;
            result.insert(cursor, x);
        }
        --N;
    }
    for (char c : result){
        cout << c;
    }
}
