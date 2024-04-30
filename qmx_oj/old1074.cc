#include <iostream>
#include<algorithm>
#define maxn 1005

using namespace std;

int main() {
    int n, a[maxn];
    int f[maxn], g[maxn];
    int len = 0, cnt = 0;
    int a;
    while (cin >> a) {
        int pos1 = upper_bound(f, f + len, a, greater<int>()) - f;
        if (pos1 == len) f[len++] = a;
        else f[pos1] = a;

        int pos2 = lower_bound(g, g + cnt, a[i]) - g;
        if (pos2 == cnt) g[cnt++] = a;
        else g[pos2] = a;
    }
    cout << len << endl;
    cout << cnt << endl;
    return 0;
}