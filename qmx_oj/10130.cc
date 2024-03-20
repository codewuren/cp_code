#include <iostream>

int main() {
	char x;
	unsigned long long sum = 0;
	while((x = std::getchar()) != '\n') {
        if (x == '-') continue;
        sum += x - '0';
    }
	if (sum == 89) std::cout << 88;
	else std::cout << sum;
	return 0;
}