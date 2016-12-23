#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
    printf("%d is largest number",a);
if(b>a&&b>c)
    printf("%d is largest number",b);
else
    printf("%d is largest number",c);
getch();
}
