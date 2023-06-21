#include<stdio.h>
struct students{
int roll,dob;
char name[20];
float fees;
}a[5];
int main(){
int i,n;

for(i=0; i<2; i++){
    printf("Enter the details of student :%d \n",i+1);
scanf(" %d  %d  %s  %f",&a[i].roll,&a[i].dob,a[i].name,&a[i].fees);
}
 printf("Enter data of sudent : \n");

for(i=0; i<2; i++){
printf("roll: %d\n dob: %d\n name : %s\n fees : %f\n",a[i].roll,a[i].dob,a[i].name,a[i].fees);
}
return 0;
}