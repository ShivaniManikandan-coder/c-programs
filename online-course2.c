#include <stdio.h>

int main() {
    int courseType;
    int fee = 0;
    scanf("%d", &courseType);
    switch (courseType) {
        case 1:  
            fee = 0;
            break;
        case 2: 
            fee = 500;
            break;
        default:
            return 0;
    }

    printf("Certificate Fee %d", fee);

    return 0;
}
