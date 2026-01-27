#include<stdio.h>
int main(){
    int atype,balance,wda;
    scanf("%d %d %d",&atype,&balance,&wda);
    switch (atype)
    {
    case 1:
        if(balance>=wda){
            printf("Transaction successful");
        }
        break;
    case 2:
        if(wda>=5000){
            printf("Limit Exceeded");
        }
        break;
    
    default:
        break;
    }
}