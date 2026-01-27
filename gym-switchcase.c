#include <stdio.h>

int main() {
    int durationType;
    int fee = 0;
    scanf("%d", &durationType);
    switch (durationType) {
        case 1:  
            fee = 1500;
            break;
        case 2:  
            fee = 4000;
            break;
        case 3:  
            fee = 7000;
            break;
        default:
            return 0;
    }

    printf("Membership Fee %d", fee);

    return 0;
}
