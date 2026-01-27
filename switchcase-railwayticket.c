#include <stdio.h>

int main() {
    int planType;
    int paymentMode;
    int planCost = 0;
    int cashback = 0;
     scanf("%d", &planType);
     scanf("%d", &paymentMode);

    switch (planType) {
        case 1:
            planCost = 199;
            break;

        case 2:
            planCost = 399;
            break;

        default:
            printf("Invalid Plan\n");
            return 0;
    }

    switch (paymentMode) {
        case 11:case 12:   
            cashback = 20;
            break;

        case 13:   
            cashback = 0;
            break;

        default:
            printf("Invalid Payment Mode\n");
            return 0;
    }

    
    printf("Pay $", planCost - cashback);

    return 0;
}
