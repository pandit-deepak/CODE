#include<stdio.h>
#include<math.h>
int power(int , int );
int main(){
    int x,y;
   printf("Enter x , y  : ");
   scanf("%d %d",&x,&y);
   printf("x^y is %d",power(x,y));
   return 0;
}
int power(int x,int y){
    if(y==0)
    return 1;
    else
    return x*power(x,y-1);
}