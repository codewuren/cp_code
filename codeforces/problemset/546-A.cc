#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;

    for (int i = 1; i <= w; i++) {
        sum += i * k;
    }

    cout << (sum < n ? 0 : (sum - n)) << endl;

    return 0;
}
