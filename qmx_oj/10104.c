#include <stdio.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.6f", r * r * acos(-1));
    return 0;
}