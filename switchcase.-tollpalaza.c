#include <stdio.h>

int main() {
    int vehicleType, trips;
    int amount = 0;
    scanf("%d %d", &vehicleType, &trips);
    switch (vehicleType) {
        case 1:  
            if (trips == 1) {
                amount = 100;
            } else if (trips >= 2) { 
                amount = 800;
            }
            break;

        case 2:  
            amount = trips * 240;
            break;

        default: 
            return 0;
    }

    printf("%d", amount);
    return 0;
}
