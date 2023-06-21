#include<stdio.h>
#include<math.h>
struct complex{
    int real,imag;
}c1,c2,c3,*p1,*p2,*p3;
int main(){
    printf("Enter 1st complex number : ");
    scanf("%d %d",&c1.real,&c1.imag);
    printf("Enter 2nd complex number : ");
    scanf("%d %d",&c2.real,&c2.imag);
    p1=&c1;
    p2=&c2;
    p3=&c3;
    p3->real=p1->real+p2->real;
    p3->imag=p1->imag+p2->imag;
    if(p3->imag>=0)
    printf("%d+%d(i)",p3->real,p3->imag);
    else
     printf("%d-%d(i)",p3->real,abs(p3->imag));
     return 0;
}