#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nenter the number:");
scanf("%d",&a);
if(a<0)
printf("\nnegative number:");
else
printf("\npositive number:");
if(a==0)
printf("\nnumber is zero");
getch();
}