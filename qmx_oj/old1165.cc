#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    char ch;
    std::cin >> ch;
    std::string ans;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) ans += str[i];
    }
    std::cout << ans;
    return 0;
}