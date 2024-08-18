#include<stdio.h>
#include<string.h>
char main()
{
    char s1[30],s2[30];
    printf("enter 1st string:");
    gets(s1);

    printf("enter 2nd string:");
    gets(s2);

    int i,n1,n2;
    n1=strlen(s1);
    n2=strlen(s2);
    printf("%d,%d\n",n1,n2);
    for(i=0;i<n2;i++)
    {
        s1[n1+i]=s2[i];
    }
    s1[n1+n2]='\0';
    puts(s1);
}

