#include<stdio.h>
float area (int *r);
float peri(int *r);
int main(){
int r;
printf("Enter radius : ");
scanf("%d",&r);
printf("area of circle is :  %f\n",area(&r));
printf("perimeter of circle is : %f",peri(&r));
    return 0;
}
float area (int *r){
float area=3.14*(*r)*(*r);
return area;
}
float peri(int *r){
float circum=2*3.14*(*r);
return circum;
}