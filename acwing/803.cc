#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    // 默认会根据第一个元素进行排序，即根据 vec[i].first 排序
    sort(vec.begin(), vec.end());

    int cnt = 0;
    int pre = vec[0].second;

    for (int i = 1; i < n; i++) {
        // 当该区间的左端点大于上个区间的右端点时，两区间不相交，故 cnt++
        if (vec[i].first > pre) {
            cnt++;
        }

        // 更新 pre 为上一个区间的最大的右端点
        pre = max(pre, vec[i].second);
    }
    
    cout << cnt + 1 << endl;

    return 0;
}
