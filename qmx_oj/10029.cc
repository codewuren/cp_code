#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    std::map<int, int> map_cnt;
    for (int i = 0; i < vec.size(); i++) {
        std::map<int, int>::iterator iterator(map_cnt.find(vec[i]));
        if (iterator != map_cnt.end()) {
            iterator->second++;
        }
        else {
            map_cnt[vec[i]] = 1;
        }
    }
    auto v = std::max_element(map_cnt.begin(), map_cnt.end(), [](const auto &x, const auto &y) { return x.second < y.second;});
    std::cout << v->first << ' ' << v->second;
    return 0;
}