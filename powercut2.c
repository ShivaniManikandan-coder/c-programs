#include <stdio.h>

int main() {
    int hours;
    scanf("%d", &hours);
    switch (1) {
        case 1:
            if (hours <= 1) {
                printf("Short Interruption");
                break;
            }
        case 2:
            if (hours <= 4) {
                printf("Medium Interruption");
                break;
            }
        case 3:
            if (hours > 4) {
                printf("Long Interruption");
                break;
            }
        default:
            break;
    }

    return 0;
}
