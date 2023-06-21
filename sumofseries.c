#include<stdio.h>
int factt(int);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("sum of series is : %d",factt(n));
    return 0;
}
int factt(int n){
    int fact=1,i,sum=0;
    for(i=1; i<=n; i++){
        fact=fact*i;
        sum+=fact;
    }
    return sum;
}