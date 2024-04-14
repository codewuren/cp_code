#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    int ans = 1;
    for (int i = 2; i <= num; i++) {
        ans *= i;
    }

    cout << ans << endl;

    return 0;
}
