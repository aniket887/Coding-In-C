#include<stdio.h>
int main()
{
    int a,b,n,i,j,r,x,f;
    printf("enter last value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=i;
        a=i;
        x=0;
        while(a>0)
        {
            r=a%10;
            f=1;
            for(j=r;j>=1;j--)
            {
                f=f*j;
            }
            x=x+f;
            a=a/10;
        }
        if(b==x)
            printf("%d\n",x);
    }
    if(n>0)
        printf("above digit/digits are strong number in between 0 to %d",n);
    else
        printf("cant find strong number in negative range");
}
