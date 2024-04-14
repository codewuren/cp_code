#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

void draw(int num) {
    vector<int> dp((1 + num) * num / 2);
    for (int i = 0; i < (1 + num) * num / 2; i++) {
        dp[i] = i + 1;
    }

    int idx = 0;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            if (dp[idx] < 10) {
                cout << 0 << dp[idx];
            } else {
                cout << dp[idx];
            }
            idx++;
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
