#include <stdio.h>

int main() {
    int fuelType, litres;
    int cost = 0;
    scanf("%d %d", &fuelType, &litres);
    switch (fuelType) {
        case 1:
            cost = litres * 105;
            break;
        case 2:  
            cost = litres * 92;
            break;
        case 3:  
            cost = litres * 85;
            break;
        default:
            return 0;
    }

    printf("Fuel Cost %d", cost);

    return 0;
}
