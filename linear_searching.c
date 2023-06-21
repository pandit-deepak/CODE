#include<stdio.h>
int main(){
    int n,num,i,c=0,a[20];
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("searching element : ");
    scanf("%d",&num);
    for(i=0; i<n; i++){
        if(num==a[i]){
        printf("searching element is %d and its pos is a[%d]\n",num,i);
        c++;}
    }  
    if(c==0)
    printf("%d is not present ",num);
    else
    printf("%d is present and repeat %d times",num,c);
    return 0;
    }