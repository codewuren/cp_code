#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int n;
vector<vector<char>> cb(n + 10, vector<char>(n + 10, '.'));
unordered_map<int, bool> dg;    // 第 row 行 i 列的主对角线
unordered_map<int, bool> udg;   // 第 row 行 i 列的副对角线
unordered_map<int, bool> col;   // 第 row 行 i 列所在的列


void dfs(int row) {
    // 格子放完，输出
    if (row == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << cb[i][j];
            }
            cout << "\n";
        }
        cout << endl;
        return ;
    }

    // 遍历第 row 行，看第 i 列能否放皇后
    for (int i = 0; i < n; i++) {
        if (!dg[i + row] && !udg[n - i + row] && !col[i]) {
            cb[row][i] = 'Q';                                   // 假设当前格子放皇后
            dg[i + row] = udg[n - i + row] = col[i] = true;     // 标记，不能放
            dfs(row + 1);                                       // 下一行
            // 回溯
            dg[i + row] = udg[n - i + row] = col[i] = false;
            cb[row][i] = '.';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;    
    dfs(0);

    return 0;
}
