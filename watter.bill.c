#include <stdio.h>

int main() {
    int connectionType, units;
    int bill = 0;
    scanf("%d %d", &connectionType, &units);
    switch (connectionType) {
        case 1:  
            switch (units <= 30) {
                case 1: 
                    bill = units * 5;
                    break;
                case 0: 
                    bill = 30 * 5 + (units - 30) * 8;
                    break;
            }
            break;

        case 2: 
            bill = units * 10;
            break;

        default:
            return 0;
    }

    printf("Bill %d", bill);

    return 0;
}
