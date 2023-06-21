#include<stdio.h>
float avg(int a[],int n);
int main(){
    int n,i,a[100];
    printf("size of array : ");
    scanf("%d",&n);
    printf("Enter array element  : ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("average is %f ",avg(a,n));
return 0;
}
float avg(int a[5],int n){
    int i,sum=0,avg,*p;
    p=*a;
    for(i=0; i<n; i++)
 sum=sum+p[i];
    return ((float)sum/n);
}