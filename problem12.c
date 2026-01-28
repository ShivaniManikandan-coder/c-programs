#include<stdio.h>
int main(){
    int n,m;
    int result =1;
    scanf("%d %d",&n,&m);
    for( int i=0;i<=n;i++){
        result=result*n;
    }
    printf("%d",result);
    return 0;
}