#include<stdio.h>
int main()
{
int number;
printf("Enter number: \n");
scanf("%d",&number);
if(number>0)
{
printf("The number is positive");
}
if(number==0)
{
printf("The number is zero");
}
if(number<0)
{
printf("The number is negative");
}
}
