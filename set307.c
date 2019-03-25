
#include<stdio.h>
void main()
{
char s[10],b;
printf("enter a string");
scanf("%s",&s);
for(b=0;s[b]!='\0';b++)
{
if((s[b]>'a')&&(s[b]<'z'))
{
printf("no numeric");

}
else
{
    printf("%c\n",s[b]);
}
}}
