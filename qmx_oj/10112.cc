#include <iostream>
#include <cmath>

bool isPrime(long long num) {
	 if(num == 1) return 0;
     if(num == 2 || num == 3) return 1;
     if(num % 6 != 1 && num % 6 != 5) return 0;
     int tmp = std::sqrt(num);
     for(int i = 5; i <= tmp; i += 6) if(num % i == 0 || num % (i + 2) == 0) return 0;
     return 1;
}

int main() {
    long long a;
    std::cin >> a;
    for (int i = 2; i <= a; i++) {
        if (isPrime(i)) {
            if (i != a) std::cout << i << ' ';
            else std::cout << i;
        }
    }
    return 0;
}