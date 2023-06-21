#include<stdio.h>
int sumofdigit(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
printf("sum of all digit is : %d",sumofdigit(n));
return 0;
}
int sumofdigit(int n){
    int d,sum=0;
    while(n>0){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}