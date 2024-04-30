#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    std::cout << std::stoll(str, 0, 16);
    return 0;
}