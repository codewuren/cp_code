#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = n / 5;
    if (n % 5 != 0) {
        ans++;
    }
     
    cout << ans << endl;

    return 0;
}
