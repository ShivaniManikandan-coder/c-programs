#include <stdio.h>

int main() {
    int vehicleType, distance;
    int fare = 0;
    scanf("%d %d", &vehicleType, &distance);
    switch (vehicleType) {
        case 1: 
            fare = distance * 10;
            break;

        case 2: 
            fare = distance * 15;
            break;

        case 3: 
            fare = distance * 20;
            break;

        default:
            return 0;
    }

    printf("Fare %d", fare);

    return 0;
}
