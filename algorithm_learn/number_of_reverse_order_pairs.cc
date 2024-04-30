#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>  

#define ll long long

using namespace std;

const int N = 1e6 + 10;

int a[N], tmp[N];
ll ans = 0;

void merge_sort(int q[], int l, int r) {
    if (l >= r) return ;

    int mid = l + r >> 1;

    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j]) tmp[k++] = q[i++];
        else {
            tmp[k++] = q[j++];
            ans += mid - i + 1;
        }
    }
    while (i <= mid) tmp[k++] = q[i++];
    while (j <= r) tmp[k++] = q[j++];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ) {
        scanf("%d", &a[i]);
    }

    merge_sort(a, 0, n - 1);


    printf("%lld\n", ans);

    return 0;
}