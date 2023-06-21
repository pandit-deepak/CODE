#include<stdio.h>
int sum(int *n,int *m);
int main(){
int n,m;
printf("sum of digonal matrixs is : %d",sum(&n,&m));
    return 0;
}
int sum(int *n,int *m){
    int a[10][10],i,sum=0,j;
    printf("Enter rows : ");
    scanf("%d",&(*n));
    printf("Enter  coloumn : ");
    scanf("%d",&(*m));
    printf("Enter the array element : ");
    for(i=0; i<(*n); i++){
    for(j=0; j<(*m); j++){
    scanf("%d",&a[i][j]);
    if(i==j)
    sum+=a[i][j];
    }        }
        return sum;
}