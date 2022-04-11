#include<stdio.h>
int main()
{
int a;
short int b;
long int c;
long long int d;
char e;
float f;
double g;
long double h;
printf("Enter integer value:\n");
scanf("%d",&a);
printf("Enter short integer value:\n");
scanf("%hi",&b);
printf("Enter long integer value:\n");
scanf("%li",&c);
printf("Enter long long integer value:\n");
scanf("%lli",&d);
printf("Enter character value:\n");
scanf("%c",&e);
printf("Enter float value:\n");
scanf("%f",&f);
printf("Enter double:\n");
scanf("lf",&g);
printf("Enter long double:\n");
scanf("Lf",&h);
printf("Integer value =%d\n",a);
printf("Short Integer value =%hi\n",b);
printf("Long Integer value =%li\n",c);
printf("Decimal value =%d\n",d);
printf("Octal value =%o\n",d);
printf("Hexadecimal value =%x\n",d);
printf("Character value =%c\n",e);
printf("Float value =%f\n",f);
printf("Double value =%lf",g);
printf("Long Double value =%Lf",h);
}
