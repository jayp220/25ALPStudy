#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int x;
    cin >> x;

    int result = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = v[left] + v[right];

        if (sum < x) {
            left++;
        } else if (sum > x) {
            right--;
        } else {
            result++;
            left++;
            right--;
        }
    }

    cout << result << endl;
    return 0;
}
