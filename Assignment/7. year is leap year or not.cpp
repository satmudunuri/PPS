#include<stdio.h>
int main()
{
int year;
printf("Enter a year:\n");
scanf("%d",&year);
if(year%4==0)
printf("The given year is a leap year");
else
printf("The given year is not a leap year");
}
