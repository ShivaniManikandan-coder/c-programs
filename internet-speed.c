#include <stdio.h>

int main() {
    int planType;
    int speed = 0;
    scanf("%d", &planType);
    switch (planType) {
        case 1:  
            speed = 40;
            break;
        case 2:  
            speed = 100;
            break;
        case 3:  
            speed = 300;
            break;
        default:
            return 0;
    }

    printf("Speed %d Mbps", speed);

    return 0;
}
