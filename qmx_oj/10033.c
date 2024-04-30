#include <stdio.h>
#include <math.h>

int main() {
    double h;
    long long n;
    scanf("%lf %d", &h, &n);
    printf("%.6lf\n", h * (3 - pow(2, 2 - n)));
    return 0;
}