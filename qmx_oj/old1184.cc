#include <iostream>
#include <algorithm>
#include <cstring>

#define ll long long

void alpha(ll num, ll* sum) {
    if ((num / 10) == 0) {
        *sum = num;
        return;
    } else {
        int p = 1;
        while (num > 0) {
            int temp = num % 10;
            if (temp != 0) p *= temp;
            num /= 10;
        }
        alpha(p, sum);
    }
}

int main() {
    ll n;
    std::cin >> n;
    ll sum = 1;
    alpha(n, &sum);
    std::cout << sum << std::endl;
    return 0;
}