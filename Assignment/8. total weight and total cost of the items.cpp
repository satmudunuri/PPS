#include<stdio.h>
int main()
{
long int weight,cost,number;
long int totalweight,totalcost;
printf("Enter weight of the item:\n");
scanf("%d",&weight);
printf("Enter cost of the item:\n");
scanf("%d",&cost);
printf("Enter number of units purchased:\n");
scanf("%d",&number);
totalcost=cost*number;
totalweight=weight*number;
printf("The total weight of the units purchased=%d\n",totalweight);
printf("The total cost of the units purchased=%d",totalcost);
}

