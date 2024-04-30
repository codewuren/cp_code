#include <iostream>

int main() {
    long long num;
    std::cin >> num;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
    return 0;
}