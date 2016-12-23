#include<stdio.h>
void main()
{
char n;
printf("\n enter the character");
scanf("%c",&n);
if(isalpha(n)>0)
printf("\ngiven charcter is alphabet");
if(isdigit(n)>0)
printf("given charcter is adigit");
}
