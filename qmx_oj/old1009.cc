#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    std::cout << *std::max_element(vec.begin(), vec.end()) << std::endl;
    std::cout << *std::min_element(vec.begin(), vec.end()) << std::endl;
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    std::cout << sum;
    return 0;
}