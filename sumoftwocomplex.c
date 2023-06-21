#include<stdio.h>
struct complex{
int real;
int imag;
};
int main(){
struct complex c1,c2,c;
printf("Enter 1st part of c1:  ");
scanf("%d %d",&c1.real,&c1.imag);
printf("Enter 2nd part of c2: ");
scanf("%d %d ",&c2.real,&c2.imag);
c.real=c1.real+c2.real;
c.imag=c1.imag+c2.imag;
if(c.imag>=0)
printf("%d+%d(i)",c.real,c.imag);
else
printf("%d+%d(i)",c.real,c.imag);
    return 0;
}
