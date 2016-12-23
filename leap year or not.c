#include<stdio.h>
void main()
{
int year;
printf("\nenter the number");
scanf("%d",&year);
if(year%4==0)
{
    if(year%100==0)
    {
        if(year%400==0)
printf("\n %d is leap year",year);
else
printf("\n%d is not leap year",year);
    }
    else
    printf("\n %d is a leap year",year);
}
else
    printf("\n %d is a not a leap year",year);
    getch();
return 0;
}
