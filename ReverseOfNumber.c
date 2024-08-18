#include<stdio.h>
void main()
{
    int n,a,r,x=0;
    printf("enter the value:");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        r=a%10;
        x=x*10+r;
        a=a/10;
    }
    while(a<0)
    {
        r=a%10;
        x=x*10+r;
        a=a/10;
    }
    if(n==0)
        printf("0");
    else
        printf("%d",x);
}
