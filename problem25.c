#include <stdio.h>

int main() {
    int n, original, temp, digit, digits = 0;
    int sum = 0, power, i;

    scanf("%d", &n);
    original = n;

    for (temp = n; temp > 0; temp /= 10) {
        digits++;
    }

    for (temp = n; temp > 0; temp /= 10) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power *= digit;
        }

        sum += power;
    }

    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
