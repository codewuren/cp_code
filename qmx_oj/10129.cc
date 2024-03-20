#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    std::string str;
    std::vector<std::string> vec;
    while(std::cin >> str) {
        vec.push_back(str);
        if (std::getchar() == '\n') break;
    }
    for (int i = 0; i < vec.size(); i++) {
        std::reverse(vec[i].begin(), vec[i].end());
        std::cout << vec[i] << ' ';
    }
    return 0;
}