#include <iostream>

int main() {
    long long n = 0;
    std::cin >> n;
    long long ans = 0;
    while (n--) {
        long long in = 0;
        std::cin >> in;
        ans += in;
    }
    std::cout << ans;
    return 0;
}