
#include <stdio.h>
void lcmhcf(int n,int m);

void main()
{
    int n,m;

    printf("Enter two Numbers\n");
    scanf("%d %d",&n,&m);
    lcmhcf(n,m);
}

void lcmhcf(int n, int m)
{
    int x=n*m;
    int y;
    for(int i=1;i<=x;i++)
    {
        if(n%i==0 && m%i==0)
        {
            y=i;
        }
    }
    printf("hcf %d\t",y);
    printf("\n");
    for(int i=1;i<=x;i++)
    {
        if(i%n==0 && i%m==0)
        {
            printf("lcm %d\t",i);
            break;
        }
    }
}
