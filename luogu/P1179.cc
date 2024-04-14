#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int ope(int num) {
    int ret = 0;
    while (num) {
        if (num % 10 == 2) {
            ret++;
        }
        num /= 10;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, r;
    cin >> l >> r;

    int cnt = 0;

    for (int i = l; i <= r; i++) {
        cnt += ope(i);
    }

    cout << cnt << endl;

    return 0;
}
