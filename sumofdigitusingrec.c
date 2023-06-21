#include<stdio.h>
int main(){
    int digit(int);
    int n;
    printf("Enter n :");
    scanf("%d",&n);
printf("sum of digit is : %d",digit(n));
return 0;
}
int digit(int n){
    if(n==0)
    return 0;
    else
    return (n%10+digit(n/10));
}