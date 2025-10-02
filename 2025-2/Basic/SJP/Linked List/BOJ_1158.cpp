#include <iostream>
#include <list>
using namespace std;

void iter_K(list<int>::iterator& it, list<int>& circ, int steps) {
    for (int i = 0; i < steps; ++i) {
        ++it;
        if (it == circ.end()) {
            it = circ.begin();
        }
    }
}

int main(){
    list<int> circ;
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N; ++i){
        circ.push_back(i + 1);
    }

    cout << "<";

    auto iter = circ.begin();
    for (int i = 0; i < N - 1; ++i){
        iter_K(iter, circ, K-1);
        cout << *iter << ", ";

        iter = circ.erase(iter);        
        if (iter == circ.end()) iter = circ.begin();
    }
    cout << *iter << '>';
}
