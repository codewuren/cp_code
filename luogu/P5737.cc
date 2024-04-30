#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

bool check(int num) {
    return (num % 4 == 0 && num % 100 != 0) || num % 400 == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y1, y2;
    cin >> y1 >> y2;

    int cnt = 0;
    vector<int> ans;

    for (int i = y1; i <= y2; i++) {
        if (check(i)) {
            cnt++;
            ans.push_back(i);
        }
    }

    cout << cnt << endl;
    for (auto v : ans) {
        cout << v << " ";
    }

    return 0;
}
