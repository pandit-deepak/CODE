#include<stdio.h>
float mean(int *);
int main(){
    int n;
printf("Mean  is : %f",mean(&n));
    return 0;
}
float mean(int *n){
    int a[100],avg,sum=0,i;
    printf("Enter the array element  : ");
scanf("%d",&(*n));
printf("Enter the array element : ");
for(i=0; i<(*n); i++){
    scanf("%d",&a[i]);
sum=sum+a[i];
avg=sum/(*n);
}
return avg;
}