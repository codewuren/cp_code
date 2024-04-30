#include <iostream>

int main() {
    char ch;
    std::cin >> ch;
    for (int i = 0; i <= int(ch - 'A'); i++) {
        char a = 'A';
        for (int j = i; j < int(ch - 'A'); j++)  std::cout << ' ';
        for (int j = 0; j <= i; j++)  std::cout << a++;
        a -= 1;
        for (int j = 0; j < i; j++)  std::cout << --a;
        std::cout << std::endl;
    }
}