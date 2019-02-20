#include <stdio.h>
void main()
{
 int a1,b1,c1;
 scanf("%d%d%d",&a1,&b1,&c1);
 if((a1>b1)&&(a1>c1))
 {
   printf("the greater num is %d",a1);
 }
 else if(b1>c1)
{   printf("the greater num is %d",b1);}
 else{
   printf("the greater num is %d",c1);}
	getch();
}
