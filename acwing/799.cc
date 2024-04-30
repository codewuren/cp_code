#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n, 0);

    // 无序表，用来记录每个元素出现次数
    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int ans = 0;
    for (int i = 0, j = 0; j < n; j++) {
        cnt[vec[j]]++;

        // 出现多次的情况
        while (cnt[vec[j]] > 1) {
            // 往后退
            cnt[vec[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }

    cout << ans << endl;

    return 0;
}
