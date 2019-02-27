#include<stdio.h>
void main()
{
  int power,number,i=1;
  int sum=1;
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("Enter power: ");
  scanf("%d",&power);
  while(i<=power)
  {
            sum=sum*number;
            i++;
  }
  printf("\n%d to the power %d is: %ld",number,power,sum);
}
