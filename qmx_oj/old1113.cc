#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

int main() {
    //int h, m, s;
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        vec.push_back(in);
    }
    for (int i = 0; i < vec.size(); i++) {
        int h = vec[i] / 3600;
        int m = (vec[i] - h * 3600) / 60 ;
        int s = (vec[i] - h * 3600) - m * 60;
        std::cout << h << ':' << m << ':' << s << std::endl;
    }
    return 0;
}