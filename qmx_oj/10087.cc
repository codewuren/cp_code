#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n;
    int t;
    std::vector<int> vec;

    while(std::cin >> n) {
        vec.push_back(n);
        if (std::getchar() == '\n') break;
    }
    std::cin >> t;

    std::unordered_map<int, int> hashtable;
    for (int i = 0; i < vec.size(); i++) {
        auto it = hashtable.find(t - vec[i]);
        if (it != hashtable.end()) {
            std::cout << it->second << ' ' << i;
            return 0;
        }
        hashtable[vec[i]] = i;
    }
    return 0;
}