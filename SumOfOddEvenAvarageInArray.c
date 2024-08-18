
#include<stdio.h>

void scn( int ch[10], int a);
int sfodd(int ch[10],int a);
int sfeven(int ch[10],int a);
void avg(int ch[10],int a);

int main()
{
    int ch[10],a;
    printf("how many integers u want to input:");
    scanf("%d",&a);
    scn(ch[10],a);


    printf("sum of odd numbers is %d\n",sfodd(ch[10],a));
    printf("sum of even numbers is %d\n",sfeven(ch[10],a));
    avg(ch[10],a);
    return 0;
}

void scn( int ch[10], int a)
{
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ch[i]);
    }
}

int sfodd(int ch[10],int a)
{
    int x=0;
    for(int i=0;i<=a;i++)
    {
        if(ch[i]%2!=0)
        {
            x=x+ch[i];
        }
    }
    return x;
}

int sfeven(int ch[10],int a)
{
    int x=0;
    for(int i=0;i<a;i++)
    {
        if(ch[i]%2==0)
        {
            x=x+ch[i];
        }
    }
    return x;
}

void avg(int ch[10],int a)
{
    int x=0;
    for(int i=0;i<a;i++)
    {
        x=x+ch[i];
    }
    printf("avg is %d",x/a);
}

