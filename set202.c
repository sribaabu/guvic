#include <stdio.h>
void main()
{
   int a, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&a);

   temp = a;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( a == reverse )
      printf("%d is a palindrome num\n", a);
   else
      printf("%d is not a palindrome num.\n", a);

}
