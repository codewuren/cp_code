#include <iostream>

int main() {
    int num;
    std::cin >> num;

    //abcde
    for (int i = 10000; i < 100000; i++) {
        int a = i / 10000 % 10;
        int b = i / 1000 % 10;
        int c = i / 100 % 10;
        int d = i / 10 % 10;
        int e = i % 10;
        if (a + b + c + d + e == num && a == e && b == d) {
            std::cout << i << std::endl;
        }
    }
    //abcdef
    for (int i = 100000; i < 1000000; i++) {
        int a = i / 100000 % 10;
        int b = i / 10000 % 10;
        int c = i / 1000 % 10;
        int d = i / 100 % 10;
        int e = i / 10 % 10;
        int f = i % 10;
        if (a + b + c + d + e + f == num && a == f && b == e && c == d) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}