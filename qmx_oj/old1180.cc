#include <iostream>

int main() {
    int min, max, factor;
    std::cin >> min >> max >> factor;
    for(int i = min; i <= max; i++) {
        if (i % factor == 0) std::cout << i << ' ';
    }
    return 0;
}