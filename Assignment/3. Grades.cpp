#include<stdio.h>
int main()
 {
int physics,chemistry,pps;
float percentage,total;
printf ("\n Enter Physics marks: ");
scanf  ("%d", &physics);
printf("Enter PPS marks: ");
scanf("%d",&pps);
printf("Enter Chemistry marks: ");
scanf("%d",&chemistry);
total=physics+chemistry+pps;
percentage=(total/300)*100;
printf("\n Total= %f",total);
printf("\n Percentage= %f",percentage);
if(percentage>=90)
printf ("\n Grade A");
else if (percentage>=80)
printf ("\n Grade B");
else if (percentage>=70)
printf ("\n Grade C");
else if  (percentage>=60)
printf ("\n Grade D");
else if  (percentage>=40)
printf ("\n Grade E");
else if (percentage<40)
printf ("\n Grade F");
}
