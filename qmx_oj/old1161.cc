#include <iostream>
#include <string>

int binaryToDecimal(std::string binary_str) {
  int decimal = 0;
  int base = 1;
  int len = binary_str.length();
  for (int i = len - 1; i >= 0; i--) {
    if (binary_str[i] == '1') {
      decimal += base;
    }
    base *= 2;
  }
  return decimal;
}

int main() {
  std::string str;
  std::cin >> str;
  std::cout << binaryToDecimal(str);
  return 0;
}