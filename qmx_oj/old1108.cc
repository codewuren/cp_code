#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    for (int i = str.length(); i >= 0; i--) {
        std::cout << str[i];
    }
    return 0;
}