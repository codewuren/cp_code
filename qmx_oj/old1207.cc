#include <iostream>
#include <vector>

namespace cwr {
    /// @brief 
    /// @param vec 
    /// @param n 
    /// @return 第一次出现目标数的下标
    int find(std::vector<int> vec, int n) {
        for (int i = 0; i < vec.size(); i++) if (vec[i] == n) return i;
        return -1;
    }
};

int main() {
    int n;
    std::cin >> n;
    std::vector<int> inputs, vec1, vec2;
    // 获取输入的数,并存放于 inputs 中
    while(n--) {
        int in;
        std::cin >> in;
        inputs.push_back(in);
    }

    for (int i = 0; i < inputs.size(); i++) {
        int index = cwr::find(vec1, inputs[i]);
        if (index >= 0) vec2[index]++;
        else {
            vec1.push_back(inputs[i]);
            vec2.push_back(1);
        }
    }
    for (auto v : vec1) std::cout << v << ' ';
    std::cout << std::endl;
    for (auto v : vec2) std::cout << v << ' ';
    return 0;
}