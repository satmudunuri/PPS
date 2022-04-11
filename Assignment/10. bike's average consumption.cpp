#include<stdio.h>
int main()
{
float distance,fuel;
float consumption;
printf("Enter the total distance travelled(in km):\n");
scanf("%f",&distance);
printf("Enter the fuel used(in litres):\n");
scanf("%f",&fuel);
consumption=distance/fuel;
printf("Average consumption = %f",consumption);
}
