#include<stdio.h>
int main()
{
int c;
printf("Enter alphabet:\n");
scanf("%c",&c);
if(c>='A'&&c<='Z')
printf("The given character is uppercase");
else 
printf("The given character is not uppercase");
}
