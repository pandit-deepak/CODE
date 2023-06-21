#include<stdio.h>
int gcd(int , int );
int main(){
int x,y,r;
printf("Enter x  , y  : ");
scanf("%d %d",&x,&y);
if(x>y)
r=gcd(x,y);
else
r=gcd(y,x);
printf("Gcd is : %d",r);
    return 0;
}
int gcd(int a,int b){
    if(a%b==0)
    return b;
    else 
    return(gcd(b,a%b));
}