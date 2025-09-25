#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N > 0) {
        string text;
        cin >> text;

        list<char> result;
        auto cursor = result.begin();

        for (char c : text) {
            if (c == '<') {
                if (cursor != result.begin()) cursor--;
            }
            else if (c == '>') {
                if (cursor != result.end()) cursor++;
            }
            else if (c == '-') {
                if (cursor != result.begin()) {
                    cursor--;
                    cursor = result.erase(cursor);
                }
            }
            else {
                result.insert(cursor, c);
            }
        }

        for (char c : result) cout << c;
        cout << endl;
        N--;
    }
}
