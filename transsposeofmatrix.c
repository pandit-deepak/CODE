#include<stdio.h>
int main(){
    int a[10][10],b[10][10],i,n,m,j,sum=0;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Enter coloumn: ");
    scanf("%d",&m);
    printf("Enter the matrix element :\n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        b[j][i]=a[i][j] ;   
    }
    }
    printf("Transpose of matrixs : \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
     printf("%d ",b[i][j]); 
    }
    printf("\n");
    }
return 0;
}