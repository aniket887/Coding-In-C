#include<stdio.h>           //strong
int main()
{
    int a,n,r,f,x,j;
    printf("enter value:");
    scanf("%d",&n);
    a=n;
    x=0;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(j=r;j>=1;j--)
        {
            f=f*j;
        }
        x=x+f;
        n=n/10;
    }
    if(a==x)
        printf("%d is a strong number",a);
    else
        printf("%d is not a strong number",a);
}
