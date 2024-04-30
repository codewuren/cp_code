#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int n;
vector<int> path(n + 10, 0);
vector<bool> vis(n + 10, false);

void dfs(int root) {
    // 遍历完
    if (root > n) {
        // 输出
        for (int i = 1; i <= n; i++) {
            cout << path[i] << " ";
        }
        cout << "\n";
    }
    // 遍历
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            path[root] = i;
            vis[i] = true;
            dfs(root + 1);  // 下一个节点
            vis[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    dfs(1);

    return 0;
}
