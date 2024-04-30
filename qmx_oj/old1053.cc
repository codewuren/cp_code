#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    std::sort(vec.begin(), vec.end());
    for (auto v: vec) std::cout << v << ' ';
    return 0;
}