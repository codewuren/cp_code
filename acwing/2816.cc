#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    int i = 0;
    for (int j = 0; j < m; j++) {
        if (v1[i] == v2[j] && i < n) {
            i++;
        }
    }

    // 当v1中的所有元素均在v2中找到时（即v1是v2的子序列时），i == n
    // 所以当 i != n 时，说明v1不是v2的子序列
    if (i == n) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
