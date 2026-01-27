#include <stdio.h>

int main() {
    int vehicleType, hours;
    int rate = 0;
    int totalFee = 0;
    scanf("%d %d", &vehicleType, &hours);
    switch (vehicleType) {
        case 1:  
            rate = 10;
            break;
        case 2:  
            rate = 20;
            break;
        default: 
            rate = 20;
            break;
    }

    totalFee = rate * hours;

    printf("Parking Fee %d", totalFee);

    return 0;
}
