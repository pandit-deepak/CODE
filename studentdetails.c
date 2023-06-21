#include<stdio.h>
struct student{
int roll,marks;
char name[20],fathersname[20],city[10];
}a[100];
int main(){
    int n,i;
    printf("Enter no. of strudents :");
    scanf("%d",&n);
    for(i=0; i<n; i++){
    printf("Enter Name : ");
    scanf("%s",a[i].name);
    printf("Enter father's name : ");
    scanf("%s",a[i].fathersname);
    printf("Enter city : ");
    scanf("%s",a[i].city);
    printf("Enter roll : ");
    scanf("%d",&a[i].roll);
    printf("Enter marks : ");
    scanf("%d",&a[i].marks); }

printf("student details which marks above 75 : \n");
for(i=0; i<n; i++){
    if(a[i].marks>75){
printf("name : %s\n father's name :%s\n city : %s\n Roll : %d\n marks :%d ",a[i].name,a[i].fathersname,a[i].city,a[i].roll,a[i].marks);
   return 0;
    }
    
}
}