#include<stdio.h>
main()
{
    char a[20];
    int len;
    printf("enter string:");
    gets(a);
    len=strl(a);
    printf("length:%d\n",len);
}
int strl(char a[])
{
    int i=0,count=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
