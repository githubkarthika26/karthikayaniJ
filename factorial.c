#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("\n enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("\n the factorial of the number %d is %d",n,fact);
}
