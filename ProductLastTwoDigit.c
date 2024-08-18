#include<stdio.h>
#include<conio.h>
void main()
{
    int n,l,l2;
    printf("enter a number:");
    scanf("%d",&n);
    l=n%10;
    n/=10;
    l2=n%10;
    printf("product of last two digit is:%d",l*l2);
}

