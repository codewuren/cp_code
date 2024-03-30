#include <bits/stdc++.h>

using namespace std;

int cnt(int num) {
    int ret = 0;
    while (num) {
        if (num & 1 == 1) {
            ret++;
        }
        num >>= 1;
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        cout << cnt(vec[i]) << " ";
    }
    cout << endl;

    return 0;
}
