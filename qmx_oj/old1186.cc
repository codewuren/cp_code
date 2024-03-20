#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.size(); i++) {
        switch(str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                std::cout << i + 1;
                return 0;
            default:
                continue;
        };
    }
    std::cout << 0;
    return 0;
}