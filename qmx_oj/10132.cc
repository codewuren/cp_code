#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(int n) {
    bool isPrime = true;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> vec;
    int m = (num + 1) * num / 2, c = 2;
    int index = 0;
    while(m) {
        if (isPrime(c)) {
            vec.push_back(c);
            m--;
        }
        c++;
    }
    std::cout << std::endl;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            if (j != num - i - 1) std::cout << vec[index] << ' ';
            else std::cout << vec[index];
            index++;
        }
        std::cout << std::endl;
    }
    return 0;
}