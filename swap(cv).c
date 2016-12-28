#include<stdio.h>
void swap(int a, int b);
int main()
{
int f=6,s=8;
printf("\n values before swap  f = %d \nand s = %d", f, s);
swap(f,s);
}
void swap(int a,int b)
{
int temp;
temp=a;
b=a;
b=temp;
printf(" \nvalues after swap f = %d\n and s = %d", a, b);
}
