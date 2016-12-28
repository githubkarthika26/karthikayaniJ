#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,n,i;
printf("\n enter the number series");
scanf("%d",&n);
printf("\nthe finocci series %d %d",f1,f2);
for(i=2;i<n;++i)
{
f3=f2+f1;
printf("\n the fibonocci series %d is ",f3);
f1=f2;
f2=f3;
}
getch();
}
