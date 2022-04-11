#include<stdio.h>
int main()
{
float length,meter,kilometer;
printf("Enter length in cm:\n");
scanf("%f",&length);
meter=length/100;
kilometer=length/100000;
printf("The length in meters is %fm\n",meter);
printf("The length in kilometers is %fkm",kilometer);
}
