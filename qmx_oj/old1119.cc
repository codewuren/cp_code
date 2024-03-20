#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

namespace cwr {
    /// @brief 
    /// @param vec 
    /// @param n 
    /// @return 第一次出现目标数的下标
    int find(std::vector<std::string> vec, std::string str) {
        for (int i = 0; i < vec.size(); i++) if (vec[i] == str) return i;
        return -1;
    }
};

int main() {
    // Get inputs
    std::string str;
    std::vector<std::string> inputs;
    std::vector<std::string> vec;
    std::vector<int> cnt;
    while (std::cin >> str) {
        inputs.push_back(str);
        if (std::getchar() == '\n') break;
    }
    
    // Process
    for (int i = 0; i < inputs.size(); i++) {
        std::transform(inputs[i].begin(), inputs[i].end(), inputs[i].begin(), ::toupper);
        if (*inputs[i].rbegin() == '.') inputs[i].erase(inputs[i].length() - 1);
    }
    
    for (int i = 0; i < inputs.size(); i++) {
        int index = cwr::find(vec, inputs[i]);
        if (index >= 0) cnt[index]++;
        else {
            vec.push_back(inputs[i]);
            cnt.push_back(1);
        }
    }

    // Print...
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << ":";
        for (int j = 0; j < cnt[i]; j++) std::cout << '*';
        std::cout << cnt[i] << std::endl;
    }
    return 0;
}