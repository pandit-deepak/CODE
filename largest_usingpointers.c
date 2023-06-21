#include<stdio.h>
void large(int *a,int *b,int *c);
int main(){
int a,b,c;
printf("Enter a , b , c : ");
scanf("%d %d %d ",&a,&b,&c);
large(&a,&b,&c);
    return 0;
}
void large(int *a,int *b,int *c){
    if(*a>*b && *a>*c)
    printf("a is largest ");
    else if (*b>*a && *b>*c)
    printf("b is largest");
    else
    printf("c is largest ");
}