#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/* 以上内容为编译器优化 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double num;
    cin >> num;

    double l = -100000, r = 100000;

    // 二分
    while (r - l > 1e-8) {
        double mid = (l + r) / 2;
        if (mid * mid * mid >= num) {
            r = mid;
        }
        else {
            l = mid;
        }
    }
    printf("%lf", l);

    return 0;
}