#include <stdio.h>

int main() {
    int accountType;
    int years;
    int interest = 0;

    scanf("%d", &accountType);
    scanf("%d", &years);
    switch (accountType) {
        case 1:   
            interest = 4;
            break;

        case 2:  
            if (years <= 3) {
                interest = 5;
            } else {
                interest = 7;
            }
            break;

        default:
            return 0;
    }

    printf("Interest %d%%", interest);

    return 0;
}
