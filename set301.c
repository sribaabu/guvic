#include<stdio.h>
void main()
{
int n,d,m,t,i,a=0;
printf("enter the first number,difference and number of terms");
scanf("%d%d%d",&n,&d,&m);
for(i=1;i<m;i++)
{
t=n+(m-1)*d;
a=a+t;
}
printf("%d",a);
}
