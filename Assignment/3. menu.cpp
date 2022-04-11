#include <stdio.h>
int main()
{
 int code,rate;
char Y;
 printf("Welcome to Breakfast World!\n The Menu is\n Idli \n Code:3232 \n Price=30/-");
printf("\n \n Upma \n Code:4567 \n Price=20/-");
printf("\n \n Poori \n Code: 7896\n Price=40/-");
printf("\n \n Mysore Bonda \n Code:7890 \n Price=25/-");
printf("\n \n Maggi \n Code:4568 \n Price=20/-");
printf("\nEnter Code:");
 scanf("%d",&code);
 switch(code)
 {
  case 3232:
    printf("Confirm order? Please enter 1 for Yes and 0 for no:");
scanf("%d",&Y);
if(Y==1)
printf("Order confirmed. Please pay 30/-");
break;
case 4567:
    printf("Confirm Order? Please enter 1 for Yes and 0 for no:");
scanf("%d",&Y);
if(Y==1)
    printf("Order confirmed. Please pay 20/-");
break;
case 7896:
    printf("Confirm order? Please enter 1 for Yes and 0 for no:");
scanf("%d",&Y);
if(Y==1)
printf("Order confirmed. Please pay 40/-");
break;
case 7890:
    printf("Confirm order? Please enter 1 for Yes and 0 for no:");
scanf("%d",&Y);
if(Y==1)
printf("Order confirmed. Please pay 25/-");
break;
case 4568:
    printf("Confirm order? Please enter 1 for Yes and 0 for no:");
scanf("%d",&Y);
if(Y==1)
printf("Order confirmed. Please pay 20/-");
break;
}
printf("\nThank you, visit again");
}
