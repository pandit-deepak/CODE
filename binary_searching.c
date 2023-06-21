#include<stdio.h>
int main(){
    int beg=0,end,mid,pos,i,n,num,a[20];
    printf("enter the size of array : ");
    scanf("%d",&n);
    end=n-1;
    printf("Enter the array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter searching element : ");
    scanf("%d",&num);
 while(beg<end){
    mid=(beg+end)/2;
    if(a[mid]==num){
        pos=mid;
        break;
    }
    else if(a[mid]<num)
    beg=mid+1;
    else
    end=mid-1;
 }   
if(pos==-1)
printf("%d is not present ");
else
printf("%d is present %dth position",num,pos);
return 0;
}