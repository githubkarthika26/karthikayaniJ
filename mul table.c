#include<stdio.h>
void main()
{
int i,ans,num[10]={1,2,3,4,5,6,7,8,9,10};
for(i=0;i<=10;i++)
{
ans=num[i]*10;
printf("\n%d*%d=%d",10,num[i],ans);
}
getch();
}
