#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/* 以上内容为编译器优化 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    vector<int> que(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> que[i];
        int l = 0, r = vec.size() - 1;
        int lidx = -1, ridx = -1;
        while (l <= r) {
            int mid = l + r >> 1;
            int num = vec[mid];
            if (num == que[i]) {
                lidx = mid;
                r = mid - 1;
            }
            else if (num < que[i]) {
                l = mid + 1;
            }
            else if (num > que[i]) {
                r = mid - 1;
            }
        }
        l = 0;
        r = vec.size() - 1;
        while (l <= r) {
            int mid = l + r >> 1;
            int num = vec[mid];
            if (num == que[i]) {
                ridx = mid;
                l = mid + 1;
            }
            else if (num < que[i]) {
                l = mid + 1;
            }
            else if (num > que[i]) {
                r = mid - 1;
            }
        }
        cout << lidx << " " << ridx << endl;
    }


    return 0;
}