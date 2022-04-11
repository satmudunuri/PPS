#include<stdio.h>
int main()
{
    int time,years,months,days;
printf("Enter time(in days):");
scanf("%d",&time);
    years = time/365; 
    months = (time- years*365)/30;
    days=(time- years*365 -months*30);

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d", days);
}

