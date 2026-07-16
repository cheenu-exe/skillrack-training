#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    int sum;
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum = 0;
            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    sum += mat[ni][nj];
                }
            }
            // if(i!=0&&j!=0)sum+=mat[i-1][j-1];
            // if(i!=n-1&&j!=m-1)sum+=mat[i+1][j+1];
            // if(i!=0)sum+=mat[i-1][j];
            // if(j!=0)sum+=mat[i][j-1];
            // if(i!=n-1)sum+=mat[i+1][j];
            // if(j!=m-1)sum+=mat[i][j+1];
            // if(i!=n-1&&j!=0)sum+=mat[i+1][j-1];
            // if(i!=0&&j!=m-1)sum+=mat[i-1][j+1];
            cout << mat[i][j] << "->" << sum << " ";
        }
    }
}
