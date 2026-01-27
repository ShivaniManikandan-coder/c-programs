#include<stdio.h>
int main(){
    int connectiontype,units;
    scanf("%d %d",&connectiontype,&units);
    switch (connectiontype)
    {
    case 1:
        if(units<=100){
            printf("%d",units*3);
        }else if (connectiontype>=100)
        {
            int k=(units-80)*3+(units-100)*5;
            printf("bill :%d",k-80);
        }
        break;
    case 2:
        if(units<=120){
            printf("%d",units*3);
        }else if(connectiontype>=100){
            int l=(units-20)*7+(units-100)*10;
            printf("bill :%d",l);
         }
        break;
    
    default:
        break;
    }
}