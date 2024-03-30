#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> vec(n + 1, 0);
    vector<int> dif(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
        dif[i] = vec[i] - vec[i - 1];   //构建差分Vector
    }

    while (m--) {
        int l, r, c;
        cin >> l >> r >> c;
        dif[l] += c;
        dif[r + 1] -= c;
    }

    // 差分Vector反推原Vector
    for (int i = 1; i <= n; i++) {
        vec[i] = dif[i] + vec[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << vec[i] << " ";
    }


    return 0;
}
