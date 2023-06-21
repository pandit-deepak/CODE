#include<stdio.h>
int fibb(int);
int main(){
    int n;
    printf("enter  n :" );
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("%d  ",fibb(i));
return 0;
}
int fibb(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else 
    return (fibb(n-2)+fibb(n-1));
}