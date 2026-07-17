#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 2) return 0;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        cout << -1;
    } else {
        cout << second;
    }
    return 0;
}
