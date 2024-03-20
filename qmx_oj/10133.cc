#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    double h, distance, temp;
    scanf("%lf %d", &h, &n);
    printf("%.6lf", h * (3 - pow(2, 2 - n)));
    return 0;
}