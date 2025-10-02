#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> height(n + 1);
    stack<int> S;
    for (int i = 1; i <= n; ++i) {
        cin >> height[i];
        while (!S.empty() && height[S.top()] < height[i]) S.pop();
        cout << (S.empty() ? 0 : S.top()) << ' ';
        S.push(i);
    }
}
