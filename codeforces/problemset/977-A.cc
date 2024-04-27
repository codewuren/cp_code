#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        }
        else {
            n -= 1;
        }
    }
    cout << n << endl;

    return 0;
}
