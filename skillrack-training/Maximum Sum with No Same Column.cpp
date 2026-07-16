#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));
    vector<vector<int>> dp(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
        dp[0][j] = a[0][j];

    for (int i = 1; i < m; i++) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int idx = -1;
        for (int j = 0; j < n; j++) {
            if (dp[i - 1][j] > max1) {
                max2 = max1;
                max1 = dp[i - 1][j];
                idx = j;
            } else if (dp[i - 1][j] > max2) {
                max2 = dp[i - 1][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (j == idx)
                dp[i][j] = a[i][j] + max2;
            else
                dp[i][j] = a[i][j] + max1;
        }
    }

    int ans = *max_element(dp[m - 1].begin(), dp[m - 1].end());

    cout << ans << '\n';

    return 0;
}
