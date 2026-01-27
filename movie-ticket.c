#include <stdio.h>

int main() {
    int seatType, showTime;
    int price = 0;
    scanf("%d %d", &seatType, &showTime);
    switch (seatType) {
        case 1:  
            price = 150;
            if (showTime >= 18) {
                price += 50;  
            }
            break;

        case 2:  
            price = 250;
            if (showTime >= 18) {
                price += 50;  
            }
            break;

        default:
            return 0;
    }

    printf("Ticket Price %d", price);

    return 0;
}
