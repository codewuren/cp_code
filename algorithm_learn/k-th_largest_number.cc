#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int MAXN = 1e5 + 10;

ll arr[MAXN];

void quick_sort(ll arr[], ll l, ll r) {
    int x = arr[(l + r) >> 1], i = l - 1, j = r + 1;
    if (l >= r) return ;
    while (i < j) {
        do i++; while (arr[i] < x);
        do j--; while (arr[j] > x);
        if (i < j) swap(arr[i], arr[j]);
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}

int main () {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    printf("%d", arr[k - 1]);

    return 0;
}