#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    int t;
    std::cin >> t;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == t) {
            std::cout << i + 1;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}