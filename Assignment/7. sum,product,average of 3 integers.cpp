#include<stdio.h>
int main()
{
int num1, num2, num3;
int sum,average,product;
printf("Enter three Numbers:\n");
scanf("%d\n%d\n%d\n",&num1,&num2,&num3);
sum=num1+num2+num3;
average=sum/3;
product=num1*num2*num3;
printf("Sum of the numbers=%d\n",sum);
printf("Average of the numbers=%d\n",average);
printf("Product of the numbers=%d",product);
}
