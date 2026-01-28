#include <stdio.h>

int main() {
    int n;
    int rev=0;
    scanf("%d",&n);
    for(n;n!=0;n/=10){
        int digit=n%10;
        rev=rev*10+digit;
    }
    printf("%d",rev);
    return 0;
}
