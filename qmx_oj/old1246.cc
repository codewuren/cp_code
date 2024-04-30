#include <iostream>
#include <cmath>

int main () {
    int n;
    int a, b, c;
    std::cin >> n;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (n == pow(a, 3) + pow(b, 3) + pow(c, 3)) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}