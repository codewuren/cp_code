#include <iostream>

int main() {
    int n;
    std::cin >> n;
    unsigned long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    std::cout << ans;
    return 0;
}