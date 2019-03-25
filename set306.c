#include<stdio.h>
void main()
{
int a[10],i,j,q,n;
printf("enter the number");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
q=a[i];
a[i]=a[j];
a[j]=q;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
