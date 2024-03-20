#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[10000], b[10000];
    a[0] = '0';
    a[1] = '\0';
    b[0] = '\0';
    scanf("%d", &n);
    int c = n;
    while(n--) {
        for (int i = 0; a[i] != '\0'; i++) {
            if (a[i] == '0') strcat(b, "1");
            else if (a[i] == '1') strcat(b, "01");
        }
        strcpy(a, b);
        b[0] = '\0';
    }
    printf("%s\n", a);
    return 0;
}