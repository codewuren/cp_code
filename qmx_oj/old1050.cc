#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main() {
    long long num;
    std::cin >> num;
    std::string out;
    std::stringstream out_stream;
    out_stream << std::hex << num;
    out_stream >> out;
    std::transform(out.begin(), out.end(), out.begin(), ::toupper);
    std::cout << out;
    return 0;
}