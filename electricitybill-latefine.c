#include <stdio.h>

int main() {
    int delayDays;
    int fine = 0;
    scanf("%d", &delayDays);
    switch (delayDays) {
        case 1:case 2:case 3:case 4:case 5:
            fine = delayDays * 50;
            break;

        case 6:case 7:case 8:case 9:case 10:
            fine = delayDays * 100;
            break;

        default: 
            fine = delayDays * 200;
            break;
    }

    printf("Fine %d", fine);

    return 0;
}
