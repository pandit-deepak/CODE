#include<stdio.h>
void sum();
int main(){
    sum();
    return 0;
}
void sum(){
    int a,b;
    printf("enter a,b : ");
    scanf("%d %d ",&a,&b);
    int r=a+b;
    printf("sum is : %d",r);
}