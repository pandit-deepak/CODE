#include<stdio.h>
int rev(int);
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
printf("Reverse of %d is : %d ",n,rev(n));
    return 0;
}
int rev(int n){
    static int r;
    r=r*10+n%10;
    if(n/10==0)
    return n;
    else
    rev(n/10);
    return  r;
}