#include <iostream>

int main() {
    long long a, b;
    std::cin >> a >> b;
    long long s1 = 0, s2 = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) s1 += i;
    }
    for (int i = 1; i < b; i++) {
        if (b % i == 0) s2 += i;
    }
    std::cout << s1 << ' ' << s2;
    if (s1 == b && s2 == a) {
        std::cout << "yes";
        return 0;
    }
    std::cout << "no";
    return 0;
}