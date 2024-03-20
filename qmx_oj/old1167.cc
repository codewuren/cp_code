#include<iostream>

int reverse(int c) {
    int k = 0;
    while (c) {
        k = 10 * k + c % 10;
        c /= 10;
    }
    return k;
}
int main(){  
    long long a,b;  
    std::cin >> a >> b;  
    std::cout << reverse(reverse(a) + reverse(b));  
    return 0;  
}