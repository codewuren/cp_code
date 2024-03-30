#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, x;
    cin >> n >> m >> x;

    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    /*
        1、二分法
        对于v2数组中的每一个元素v2[i]，在v1数组中寻找能满足值为x - v2[i]的元素，该元素即为所求答案。
    */
    // for (int i = 0; i < m; i++) {
    //     int tgt = x - v2[i];
    //     int l = 0, r = n - 1;
    //     while (l < r) {
    //         int mid = l + r >> 1;
    //         if (v1[mid] >= tgt) {
    //             r = mid;
    //         }
    //         else {
    //             l = mid + 1;
    //         }
    //     }

    //     if (v1[r] == tgt) {
    //         cout << r << " " << i << endl;
    //         break;
    //     }
    // }

    /*
        2、双指针
        这个方法与暴力法最大的区别是j不会回退，当v1[i] + v2[j] > x时，由于是升序数组，j后退时，v1[i] + v2[j] 依旧大于 x
    */
    for (int i = 0, j = m - 1; i < n; i++) {
        while (j >= 0 && v2[j] + v1[i] > x) {
            j--;
        }
        if (j >= 0 && v2[j] + v1[i] == x) {
            cout << i << " " << j << endl;
            break;
        }
    }

    return 0;
}
