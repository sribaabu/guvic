#include <stdio.h>
#include <math.h>
 
void main()
{
    int n, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n!= 0)
    {
        rem = n % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        n = n / 10;
    }
    if (sum == temp)
        printf ("yes");
    else
        printf ("no");
}
