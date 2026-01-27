#include <stdio.h>

int main() {
    int delayDays;
    int fine = 0;
    scanf("%d", &delayDays);
    switch (1) {  
        case 1: 
            if (delayDays <= 5) {
                fine = delayDays * 50;
                break;
            }
        case 2:
            if (delayDays <= 10) {
                fine = delayDays * 100;
                break;
            }
        case 3:
            if (delayDays > 10) {
                fine = delayDays * 200;
                break;
            }
        default:
            fine = 0;
    }

    printf("Fine %d", fine);

    return 0;
}
