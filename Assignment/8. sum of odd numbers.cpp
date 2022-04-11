#include <stdio.h>
int main() {
    int n, i, sum = 0;
printf("Printing the sum of all odd numbers from 1 to n\n");
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
if(i%2!=0)
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}
