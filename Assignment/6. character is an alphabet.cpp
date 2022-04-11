#include<stdio.h>
int main()
{
char character;
printf("Enter character: \n");
scanf("%c",&character);
if((character>='a'&&character<='z')||(character>='A'&&character<='Z'))
printf("The character is an alphabet");
}
