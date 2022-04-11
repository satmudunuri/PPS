#include <stdio.h>
int main()
{
    int a,n;
    printf("Print all natural numbers from n to 1:");
    scanf("%d", &n);
    a=1;
    while(a<=n)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
