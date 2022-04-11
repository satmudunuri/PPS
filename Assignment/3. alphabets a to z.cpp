#include <stdio.h>
int main()
{
    char ch='A';
    printf("Printing all alphabets from A to Z:\n");
    while(('A'<=ch)&&(ch<='Z'))
    {
        printf("%c\n",ch);
ch++;
    }

    return 0;
}
