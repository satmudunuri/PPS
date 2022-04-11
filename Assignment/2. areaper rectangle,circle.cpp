#include<stdio.h>
#include<math.h>
int main()
{
float length,breadth,radius,arectangle,acircle,prectangle,pcircle;
printf("Enter the length of the rectangle:\n");
scanf("%f",&length);
printf("Enter the breadth of the rectangle:\n");
scanf("%f",&breadth);
printf("Enter the radius of the circle:\n");
scanf("%f",&radius);
prectangle=2*(length+breadth); 
arectangle=length*breadth;
pcircle=2*3.14*radius;
acircle=3.14*radius*radius;
printf("The perimeter and area of the rectangle are %f and %f respectively\n",prectangle,arectangle);
printf("The perimeter and area of the circle are %f and %f respectively",pcircle,acircle);
}
