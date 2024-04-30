#include <iostream>
#include <bitset>

int main() {
    for (int i = 0; i < 32; i++) {
        std::cout << std::bitset<5>(i) << std::endl;
    }
    return 0;
}