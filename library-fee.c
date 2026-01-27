#include <stdio.h>

int main() {
    int bookType, daysLate;
    int fee = 0;
    scanf("%d %d", &bookType, &daysLate);
    switch (bookType) {
        case 1:  
            fee = daysLate * 2;
            break;
        case 2:  
            fee = daysLate * 5;
            break;
        default:
            return 0;
    }

    printf("Late Fee %d", fee);

    return 0;
}
