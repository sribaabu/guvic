#include <stdio.h>
void main() 
{
int num,flag=0,i;
scanf("%d",&num);
while(num!=0)
{
num=num/10;
flag++;
}
printf("%d",flag);
}
