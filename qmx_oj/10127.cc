#include <iostream>
#include <string>

std::string subreplace(std::string resource_str, std::string sub_str, std::string new_str) {
    std::string str4 = resource_str;
    std::string::size_type pos = 0;
    while((pos = str4.find(sub_str)) != std::string::npos) str4.replace(pos, sub_str.length(), new_str);
    return str4;
}


int main() {
    std::string str1, str2, str3;
    std::cin >> str1 >> str2 >> str3;
    std::cout << subreplace(str1, str2, str3);
    return 0;
}