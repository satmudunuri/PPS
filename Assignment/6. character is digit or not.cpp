#include<stdio.h>
int main()
{
int c;
printf("Enter character:\n");
scanf("%d",&c);
if(c>=0&&c<=9)
printf("The character is a digit");
else 
printf("The character is not a digit");
}
