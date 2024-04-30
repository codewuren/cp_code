#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a[n][n];
    // Fill the array.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < i + 1; j++) {
            a[i][j] = 1;
        }
    }

    for (int i = 2; i < n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    // Print...
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}