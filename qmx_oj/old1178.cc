#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;
    if (n < 10) std::cout << n;
    else if (n < 100) std::cout << n / 10 << ' ' << n % 10;
    else if (n < 1000) std::cout << n / 100 << ' ' << n / 10 % 10 << ' ' << n % 10;
    return 0;
}