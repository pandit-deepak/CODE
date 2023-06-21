#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,r1,r2;
    printf("Enter a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0){
        printf("Root is real \n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("root 1 is  : %f \n",r1);
        printf("root 2 is  : %f ",r2);
    }
    else 
    printf("Imaginary root");
}