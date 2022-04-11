#include<stdio.h>
int main()
{
int id,hours,amount;
float salary;
printf("Enter Employee ID:\n");
scanf("%d",&id);
printf("Enter no. of hours of work in a month:\n");
scanf("%d",&hours);
printf("Enter amount received per hour:\n");
scanf("%d",&amount);
salary=amount*hours;
printf("Employee %d has received a salary of %f for the month\n",id,salary);
}
