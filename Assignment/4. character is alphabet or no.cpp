#include<stdio.h>
int main()
{
int c;
printf("Enter character:\n");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("The character is an alphabet");
else
printf("The character is not an alphabet");
}
