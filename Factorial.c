#include<stdio.h>
int main()
{
    int n,i,x=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("factorial is %d",x);
}
