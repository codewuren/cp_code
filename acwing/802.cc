#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    std::cin >> n >> m;

    map<int, int> ope;
    vector<pair<int, int>> vec;


    while (n--) {
        int x, c;
        std::cin >> x >> c;
        ope[x] += c;
    }

    int sum = 0;
    for (auto [idx, num] : ope) {
        vec.push_back({idx, sum});
        sum += num;
    }

    vec.push_back({1e9 + 5, sum});

    while (m--) {
        int l, r;
        std::cin >> l >> r;

        // 二分法找到第一个大于等于 l 的点
        auto v1 = upper_bound(vec.begin(), vec.end(), (pair<int, int>) {l, -1e9 - 5});

        // 二分法找到第一个大于 r 的店
        auto v2 = upper_bound(vec.begin(), vec.end(), (pair<int, int>) {r, 1e9 + 5});

        cout << v2->second - v1->second << endl;
    }


    return 0;
}
