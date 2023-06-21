#include<stdio.h>
#include<math.h>
struct point{
int x,y;
};
union line{
struct end_point{
struct point p1,p2;
}points;
float distanc;
}l;
int main(){
printf("Enter x1 y1 : ");
scanf("%d %d",&l.points.p1.x,&l.points.p1.y);
printf("Enter x2,y2 : ");
scanf("%d %d",&l.points.p2.x,&l.points.p2.y);
l.distanc=sqrt((pow(l.points.p2.x-l.points.p1.x,2))+(pow(l.points.p2.y-l.points.p1.y,2)));
printf("The distance is : %f",l.distanc);
}