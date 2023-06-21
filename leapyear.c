#include<stdio.h>
int main(){
    int yr;
    printf("Enter the yeaar : ");
    scanf("%d",&yr);
   /*/ if(yr%100==0){
        if(yr%400==0)
        printf("leap year");
        else 
        printf("Not leap year");
    }
    else{
         if(yr%4==0)
    printf("leap year");
    else  
    printf("Not leap year");
    }
    return 0;*/
    if((yr%4==0) && (yr%100!=0 || yr%400==0))
    printf("leap year");
    else
    printf("Not year ");
    return 0;
}