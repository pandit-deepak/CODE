#include<stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[20];
    puts("Enter the 1st string : ");
    gets(s1);
    puts("Enter the 2nd strint: ");
    gets(s2);
    strcat(s1,s2);
    puts(s1);
}