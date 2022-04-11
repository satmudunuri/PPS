#include<stdio.h>
int main()
{
int number;
printf("Enter number:");
scanf("%d",&number);
switch(number)
{
case 1:
if(number%2==0)
printf("The number is even");
break;
case 2:
if(number%2!=0)
printf("The number is odd");
break;
default:
printf("");
}
}
