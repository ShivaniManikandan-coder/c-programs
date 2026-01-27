#include <stdio.h>

int main() {
    int customerType, billAmount;
    int payAmount;
    scanf("%d %d", &customerType, &billAmount);
    switch (customerType) {
        case 1:  
            payAmount = billAmount - (billAmount * 5 / 100);
            break;

        case 2:  
            payAmount = billAmount - (billAmount * 15 / 100);
            break;

        default:
            return 0;
    }

    printf("Pay %d", payAmount);

    return 0;
}
