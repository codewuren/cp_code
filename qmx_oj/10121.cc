#include <iostream>

int main() {
    long long n;
    long long ans = 1;
    std::cin >> n;
    for (long long i = 0; i < n; i++) {
        ans *= 2;
    }
    std::cout << ans;
    return 0;
}