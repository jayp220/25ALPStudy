#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100000]; //문제에서 주어진 n의 최댓값

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int x;
    cin >> x;

    int result = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

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
