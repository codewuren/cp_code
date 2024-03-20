#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n;
    cin >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int cnt = 0;
    int key = vec[k - 1];
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] >= key && vec[i] > 0) {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}
