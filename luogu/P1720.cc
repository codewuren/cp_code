#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    vector<double> dp(num + 1);

    dp[0] = dp[1] = 1.0;

    for (int i = 2; i < num; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << setprecision(2);
    cout << fixed;
    cout << dp[num - 1] << endl;


    return 0;
}
