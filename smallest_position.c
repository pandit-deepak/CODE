#include<stdio.h>
int main(){
    int n,small,pos,a[20],i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    small=a[0];
    for(i=0; i<n; i++){
    if(a[i]<small)
    small=a[i];
    pos=i;
    }
    printf("smallest element %d and its position is a[%d]",small,i);
    return 0;
}