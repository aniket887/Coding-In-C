#include<stdio.h>
#include<string.h>
void main()
{
    char n[20];
    printf("enter string:");
    gets(n);
    int i;
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]>='a' && n[i]<='z')
            n[i]=n[i]-32;
    }
    printf("%s",n);
}
