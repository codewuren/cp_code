#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

void RemoveRepeat(std::vector<int>& vec) {
    std::set<int> setVec(vec.begin(), vec.end());
    vec.assign(setVec.begin(), setVec.end());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    RemoveRepeat(vec);
    std::sort(vec.begin(), vec.end());
    std::cout << vec.size() << std::endl;
    for (auto v : vec) std::cout << v << ' ';
    return 0;
}