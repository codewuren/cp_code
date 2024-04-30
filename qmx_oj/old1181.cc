#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    for (long long i = 1; i <= n; i++) {
        if (n % i == 0) std::cout << i << " * " << n / i << " = " << n << std::endl;
    }
    return 0;
}