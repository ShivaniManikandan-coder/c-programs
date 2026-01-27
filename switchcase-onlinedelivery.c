#include <stdio.h>

int main() {
    int orderAmount, speedType;
    int delivery = 0;

    scanf("%d %d", &orderAmount, &speedType);

    switch (speedType) {
        case 1:   
            delivery = 50;
            break;

        case 2: 
            if (orderAmount < 1000) {
                delivery = 100;
            } else {
                delivery = 0;
            }
            break;

        default:
            return 0;
    }

    printf("Delivery %d", delivery);

    return 0;
}
