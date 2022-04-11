#include <stdio.h>
int main() {
int i,numbers[5],total=0,count=0;
printf("\nEnter the first number: ");
scanf("%d", &numbers[0]);
printf("\nEnter the second number: ");
scanf("%d", &numbers[1]);
printf("\nEnter the third number: ");
scanf("%d", &numbers[2]);
printf("\nEnter the fourth number: ");
scanf("%d", &numbers[3]);
printf("\nEnter the fifth number: ");
scanf("%d", &numbers[4]);
for (i = 0; i < 5; i++) {
    if (numbers[i] > 0) {
        count++;
        total += numbers[i];
    }
}
printf("\nThe number of positive numbers: %d\n", count);
return 0;
 }
