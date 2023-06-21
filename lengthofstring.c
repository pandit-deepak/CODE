#include<stdio.h>
#include<string.h>
int main(){
    char ch[50],i;
    puts("Enter the string : ");
    gets(ch);
   /* int l=strlen(ch);
    printf("string length is : %d",l);
    return 0;*/
    for(i=0; ch[i]!='\0'; i++);
    printf("string length is : %d",i);
    return 0;
}