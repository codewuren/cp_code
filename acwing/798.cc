#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> matrix(n + 10, vector<int>(m + 10, 0));

    //diff是matrix的差分数组
    vector<vector<int>> diff(n + 10, vector<int>(m + 10, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> matrix[i][j];
            
            // diff的前缀和matrix
            // 由matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1] + diff[i][j]
            // 推出diff[i][j] = matrix[i][j] - matrix[i - 1][j] - matrix[i][j - 1] + matrix[i - 1][j - 1]
            diff[i][j] = matrix[i][j] - matrix[i - 1][j] - matrix[i][j - 1] + matrix[i - 1][j - 1];
        }
    }

    while (q--) {
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;

        // 一维差分的扩展
        diff[x1][y1] += c;
        diff[x1][y2 + 1] -= c;
        diff[x2 + 1][y1] -= c;
        diff[x2 + 1][y2 + 1] += c;
    }

    // 差分数组(diff)的前缀和(matrix)是原矩阵，所以要求差分数组的前缀和，就可以得出修改过的矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1] + diff[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
