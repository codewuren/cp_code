#include <iostream>

int main() {
    for (int i = 1000; i < 10000; i++) {
        int a = i / 1000;
        int b = i / 100 % 10;
        int c = i / 10 % 10;
        int d = i % 10;
        if (a + b + c + d == 10) std::cout << i << std::endl;
    }
    return 0;
}