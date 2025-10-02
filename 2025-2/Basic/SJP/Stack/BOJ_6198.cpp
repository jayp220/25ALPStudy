#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, h;
    cin >> N;
    long long count = 0;
    stack<int> S;
    cin >> h;
    S.push(h); 
    for (int i = 1; i < N; i++){
        cin >> h;
        while (!S.empty() && S.top() <= h) S.pop();
        count += S.size();
        S.push(h);
    }
    cout << count;
}
