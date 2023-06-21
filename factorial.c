#include<stdio.h>
int fact(int );
int main(){
int n;
printf("Enter n : ");
scanf("%d",&n);
printf("factorial is : %d",fact(n));
    return 0;
}
int fact(int n){
    int i,fac=1;
    for(i=n; i>=1; i--){
    fac=fac*i;
    }
    return (fac);
}