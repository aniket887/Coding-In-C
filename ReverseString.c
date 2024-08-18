#include<stdio.h>
#include<string.h>
main()
{
    char a[20];
    printf(" Enter the string:");
    gets(a);
    revstr(a);
    printf("%s", a);
}
revstr(char a[])
{
    int i, l, t;
    l=strlen(a);
    for (i = 0; i < l/2; i++)
    {
        t= a[i];
        a[i] = a[l - i - 1];
        a[l - i - 1] = t;
    }
}
