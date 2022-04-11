#include <stdio.h>
int main() {
int n;
printf("Printing all even numbers from 1 to 100:\n");
n=1;
while(n<=100)
{ if(n%2==0)
printf("%d\n",n);
n++;
}
}
