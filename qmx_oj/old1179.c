#include <stdio.h>

int main() {
    int h;
    double s;
    scanf("%d %lf", &h, &s);
    if (h <= 40) printf("%.2f", h * s);
    else if (h <= 50) printf("%.2f", 40 * s + 1.5 * (h - 40) * s);
    else printf("%.2f", 40 * s + 1.5 * 10 * s + 2 * (h - 50) * s);
    return 0;
}