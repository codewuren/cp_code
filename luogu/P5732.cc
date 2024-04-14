#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

void draw(int num) {
    vector<vector<int>> dp(num, vector<int>(num, 1));
    for (int i = 0; i < num; i++) {
        for (int j = 1; j < i; j++) {
            // e.g. dp[2][1] = dp[1][0] + dp[1][1]
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    draw(num);

    return 0;
}
