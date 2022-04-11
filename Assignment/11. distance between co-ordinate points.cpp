#include<stdio.h>
#include<math.h>
int main()
{
int x,y,a,b,distance;
printf("Enter co-ordinates of point 1:");
scanf("%d,%d",&x,&y);
printf("Enter co-ordinates of point 2:");
scanf("%d,%d",&a,&b); 
distance=sqrt((a-x)*(a-x)+(b-y)*(b-y));
printf("distance=%d",distance);

}
