#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> vec;
    std::vector<int> len;
    std::string in;
    while (std::cin >> in) {
        vec.push_back(in);
        if (std::getchar() == '\n') break;
    }
    for (auto v : vec) len.push_back(v.length());
    std::cout << vec[std::max_element(len.begin(), len.end()) - len.begin()];
    return 0;
}