#include<stdio.h>
void fibb(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    fibb(n);
    return 0;
}
void fibb(int n){
    int a=0,b=1,c;
    printf("fibonacci series is : ");
    for(int i=1; i<=n; i++){
        c=a+b;
        printf("%d  ",a);
        a=b;
        b=c;
    }
    
    }
