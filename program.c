// Simple Calc
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("1. Add\n2. Sub\n3. Multiply\n4. Divide\nChoose:");
    int opt;
    scanf("%d", &opt);
    switch (opt) {
        case 1:
            printf("%d\n", a+b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a*b);
            break;
        case 4:
            printf("%d\n", a/b);
            break;
        default:
            printf("Invalid\n");
            break;
    }
    return 0;
}