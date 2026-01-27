#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    switch (marks/10)
    {
    case 9:
    if(marks>=91&&marks<=100)
        printf("Grade A");
        break;
    case 8:
        if(marks>=81&&marks<=90){
            printf("Grade B");
        }
    case 7:
    if(marks>=71&&marks<=80){
        printf("Grade C");
    }
    case 6:
    if(marks>=61&&marks<=70){
        printf("Grade D");
    }
    case 5:
    if(marks>=51&&marks<=60){
        printf("Grade E");  
    }
    case 4:
    if(marks>=41&&marks<=50){
        printf("Grade F");  
    }
    case 3:
    if(marks>=31&&marks<=39){
        printf("Supplimentary");
    }
    case 2:
    if(marks<30){
        printf("Fail");
    }

    
    default:
        break;
    }
    return 0;
}