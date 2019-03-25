#include<stdio.h>
void main()
{
int a[10],i,x;
printf("enter the limit");
scanf("%d",&x);
printf("enter the element");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("the elements with index");
for(i=0;i<x;i++)
{
printf("%d\t%d\n",i,a[i]);
}
}
