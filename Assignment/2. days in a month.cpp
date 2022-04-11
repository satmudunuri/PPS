#include<stdio.h>
int main()
{
int month;
printf("Enter a month from 1 to 12:");
scanf("%d",&month);
switch(month)
{
case 1:
printf("\nNo. of days in January= 31");
break;
case 2:
printf("\nNo. of days in February= 28(29 for leap year)");
break;
case 3:
printf("\nNo. of days in March= 31");
break;
case 4:
printf("\nNo. of days in April= 30");
break;
case 5:
printf("\nNo. of days in May= 31");
break;
case 6:
printf("\nNo. of days in June= 30");
break;
case 7:
printf("\nNo. of days in July= 31");
break;
case 8:
printf("\nNo. of days in August= 31");
break;
case 9:
printf("\nNo. of days in September= 30");
break;
case 10:
printf("\nNo. of days in October= 31");
break;
case 11:
printf("\nNo. of days in November= 30");
break;
case 12:
printf("\nNo. of days in December= 31");
break;
default:
printf("INVALID INPUT");
break;
}
}
