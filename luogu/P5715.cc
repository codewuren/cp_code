#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> vec(3);
    for (int i = 0; i < 3; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for (auto v : vec) {
        cout << v << " ";
    }

    return 0;
}
