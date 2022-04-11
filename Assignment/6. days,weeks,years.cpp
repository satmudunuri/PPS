#include <stdio.h> 
int main()
{
    int days,weeks,years;
printf("Enter the number of days:\n");
scanf("%d",&days);
    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);

    return 0;
}
