#include<stdio.h>
int main(){
    char s1[20],s2[20];
    puts("Enter the first string : ");
    gets(s1);
    puts("enter 2nd string : ");
    gets(s2);
    int c=strcmp(s1,s2);
    if(c==0)
    printf("same string");
    else
    printf("different string ");
    return 0;
}