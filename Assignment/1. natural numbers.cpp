#include <stdio.h>
int main()
{
    int a,n;
    printf("Print all natural numbers from 1 to n:");
    scanf("%d", &n);
    a=1;
    while(a<=n)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}
