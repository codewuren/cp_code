#include <iostream>

int main() {
    int time;
    std::cin >> time;
    std::cout << (time % 4 == 0 ? "yes" : "no");
    return 0;
}