#include <stdio.h>

int main() {
    int n, decimal = 0, base = 1, remainder;

    scanf("%d", &n);   

    for (; n > 0; n = n / 10) {
        remainder = n % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
    }

    printf("%d", decimal);

    return 0;
}
