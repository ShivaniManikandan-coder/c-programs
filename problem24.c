#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    scanf("%d", &n);
    original = n;

    for (; n > 0; n = n / 10) {
        reverse = reverse * 10 + (n % 10);
    }

    if (original == reverse)
        printf("Yes");
    else
        printf("No");

    return 0;
}
