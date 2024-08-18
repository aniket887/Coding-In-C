#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
