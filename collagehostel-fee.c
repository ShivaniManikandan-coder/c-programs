#include <stdio.h>

int main() {
    int roomType;
    int fee = 0;
    scanf("%d", &roomType);
    switch (roomType) {
        case 1:  
            fee = 80000;
            break;

        case 2:  
            fee = 60000;
            break;

        case 3:  
            fee = 45000;
            break;

        default:
            return 0;
    }

    printf("Hostel Fee %d", fee);

    return 0;
}
