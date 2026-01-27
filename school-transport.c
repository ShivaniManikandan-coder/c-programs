#include <stdio.h>

int main() {
    int distanceCategory;
    int fee = 0;
    scanf("%d", &distanceCategory);
    switch (distanceCategory) {
        case 1: 
            fee = 800;
            break;
        case 2:  
            fee = 1200;
            break;
        case 3:  
            fee = 1800;
            break;
        default:
            return 0;
    }

    printf("Transport Fee %d", fee);

    return 0;
}
