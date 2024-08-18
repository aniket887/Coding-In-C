#include<stdio.h>
void main()
{
    int a,b,n,m,o,i,j,sum;
    printf("enter value of range from: ");
    scanf("%d",&m);
    printf("enter value of up to: ");
    scanf("%d",&n);
    for(j=m+1;j<=n;j++)
    {
        b=j;
        sum=0;
        for (i=1;i<j;i++)
        {
            if(b%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==b)
        printf("%d\n",sum);
    }
    if(n>5)
        printf("above digit/digits are perfect number in between %d to %d\n",m,n);
    else
        printf("no perfect number found in given range\n");
}

