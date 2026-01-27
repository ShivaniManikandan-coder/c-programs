#include <stdio.h>

int main() {
    int classType;
    int fee = 0;
    scanf("%d", &classType);
    switch (classType) {
        case 1:  
            fee = 300;
            break;
        case 2: 
            fee = 800;
            break;
        case 3:  
            fee = 1500;
            break;
        default:
            return 0;
    }

    printf("Upgrade Fee %d", fee);

    return 0;
}
