#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    vector<int> sums(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
        sums[i] = sum;
    }

    vector<vector<int>> que(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> que[i][0] >> que[i][1];
        if (que[i][0] == 1) {
            cout << sums[que[i][1] - 1] << endl;
        }
        else {
            cout << sums[que[i][1] - 1] - sums[que[i][0] - 2] << endl;
        }
    }

    return 0;
}
