#include<stdio.h>
void main()
{
    int a[10],i,n,k,q=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        q=q+a[i];
    }
    k=q/n;
    printf("%d",k);
    
}
