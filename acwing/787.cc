#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int arr[MAXN];
int n;

void merge_sort(int arr[], int l, int r) {
    if (l >= r) return ;
    int mid = (l + r) >> 1, i = l, j = mid + 1, k = 0;

    merge_sort(arr, l, mid), merge_sort(arr, mid + 1, r);

    int tmp[MAXN];

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= r) tmp[k++] = arr[j++];

    for (i = l, j = 0; i <= r; i++, j++) {
        arr[i] = tmp[j];
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}