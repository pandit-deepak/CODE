#include<stdio.h>
#include<string.h>
int main(){
char s1[10],s2[10];
puts("Enter the string : ");
gets(s1);
// strrev(s1);
// puts(s1);
// return 0;
strcpy(s2,s1);
puts(s2);
return 0;
}