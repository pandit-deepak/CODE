#include<stdio.h>
struct address{
int house_no,pincode;
char city[10];
};
struct employee{
    int id_name[20];
    float salary; 
    struct employee add;
}emp;
int main(){
    printf("Enter details of employee : ");
scanf("id_name : %d\n  salary : %f\n house_no : %d\n pincode : %d\n city : %s",&emp.id_name[20],&emp.salary,&emp.add.house_no,&emp.add.pincode,emp.add.city);
printf("id_name[20] : %d\n  salary : %f\n house_no : %d\n pincode : %d\n city : %s",emp.id_name[20],emp.salary,emp.add.house_no,emp.add.pincode,emp.add.city);
return 0;
}