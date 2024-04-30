#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        if(str[i] != ' ') std::cout << str[i];
        else std::cout << std::endl;
    }
    return 0;
}