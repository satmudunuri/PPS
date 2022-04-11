#include<stdio.h>
int main()
{
int cheld,cattend,percent;
printf("Enter the number of classes held:\n");
scanf("%d",&cheld);
printf("Enter the number of classes attended:\n");
scanf("%d",&cattend);
percent=(cattend/cheld)*100;
if(percent>=75)
printf("The student is allowed to give her exams");
else
printf("The student is not allowed to give her exams");
}
