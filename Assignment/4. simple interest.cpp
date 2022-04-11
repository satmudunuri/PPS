#include<stdio.h>
int main()
{
float pamount,rate,time,simple_interest;
printf("Enter Principal amount:\n");
scanf("%f",&pamount);
printf("Enter time:\n");
scanf("%f",&time);
printf("Enter rate of interest:\n");
scanf("%f",&rate);
simple_interest=(pamount*time*rate)/100;
printf("The Simple interest is %f",simple_interest);
}
