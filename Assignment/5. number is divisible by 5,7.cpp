#include<stdio.h>
int main()
{
int number;
printf("Enter number: \n");
scanf("%d",&number);
if(number%5==0&&number%7==0)
printf("The number is divisible by both 5 and 7");
}
