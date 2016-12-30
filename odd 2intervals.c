#include<stdio.h>
void main()
{
int a,b;
printf("\n enter the number %d and %d");
scanf("%2d",&a,&b);
if(a%2!=0)
{
printf("\n %d is odd",a);
}
else
{
printf("\n %d is odd",b);
}
if(a%2==0)
{
printf("\n %d is not odd",a);
}
else
{
printf("\n %d is not odd",b);
}
getch();
}
