#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int orginal=n;
    int sum=0;
    for(n;n!=0;n/=10){
        int fact=1;
        int digit=n%10;
        
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(orginal==sum){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;

}