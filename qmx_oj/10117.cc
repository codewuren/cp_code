#include <iostream>

int main() {
    int r;
    std::cin >> r;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "+";
        }
        if (r != 1) std::cout << std::endl;
    }
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * (r - 1) - (1 + 2 * i); j++) {
            std::cout << "+";
        }
        if (i != r - 2) std::cout << std::endl;
    }
    return 0;
}