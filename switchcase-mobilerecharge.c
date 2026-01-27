#include <stdio.h>

int main() {
    int planType;
    int paymentMode;
    int amount = 0;
    int cashback = 0;

    scanf("%d", &planType);
    scanf("%d", &paymentMode);

    switch (planType) {
        case 1:
            amount = 199;
            break;

        case 2:
            amount = 399;
            break;

        default:
            return 0;
    }

    switch (paymentMode) {
        case 11: 
        case 12:
            cashback = 20;
            break;

        case 13: 
            cashback = 0;
            break;

        default:
            return 0;
    }

    printf("Pay %d", amount - cashback);

    return 0;
}
