#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> id(n);
    vector<int> qu(n);

    for (int i = 0; i < n; i++) {
        cin >> id[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> qu[i];
        cout << id[qu[i] - 1] << endl;
    }

    return 0;
}
