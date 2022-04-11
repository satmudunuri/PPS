#include<stdio.h>
int main()
{
float tfahrenheit,tcelsius;
printf("Enter temperature in fahrenheit:");
scanf("%f",&tfahrenheit);
tcelsius=(tfahrenheit-32)*5/9;
printf("The temperature in celsius is = %f\n",tcelsius);

}
