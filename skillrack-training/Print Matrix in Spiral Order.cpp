#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    if (!(cin >> r >> c)) return 0;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matrix[i][j];
        }
    }
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) cout << matrix[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; ++i) cout << matrix[i][right] << " ";
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) cout << matrix[bottom][i] << " ";
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << matrix[i][left] << " ";
            left++;
        }
    }
    return 0;
}
