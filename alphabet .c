#include<stdio.h>
void main()
{
char c;
printf("get the character \n");
scanf("%c",&c);
if((c>='a'&& c<='z')(c>='A'&& c<='Z'))
printf("%c is alphabet",c);
else
printf(" %c not alphabet",c);
getch();
}
