#include<stdio.h>
void main()
{
    int n,r,x=0,a;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    while(n>0){
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    if(a==x)
        printf("%d is palindrome number",a);
    else
        printf("%d is not palindrome number",a);
    getch();
}


