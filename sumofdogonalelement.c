#include<stdio.h>
int main(){
    int a[10][10],i,n,m,j,sum=0;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Enter coloumn: ");
    scanf("%d",&m);
    printf("Enter the matrix element : ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        if(i==j)
       sum+=a[i][j];}
    }
printf("sum of digonal element is : %d",sum);
return 0;
}