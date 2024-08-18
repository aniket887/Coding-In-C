#include<stdio.h>
main()
{
    int arr[50],brr[50],n,x,i,loc;
    printf("taking 1st array\n");
    printf("enter size of 1st array:");
    scanf("%d",&n);
    printf("enter %d elements of 1st array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your 1st array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("taking 2nd array\n");
    printf("enter size of 2nd array:");
    scanf("%d",&x);
    printf("enter %d elements of 2nd array:",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&brr[i]);
    }
    printf("your 2nd array is:\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",brr[i]);
    }
    printf("enter location in 1st array where 2nd array is to be insert:");
    scanf("%d",&loc);
    for(i=n-1;i>=loc;i--)
    {
        arr[i+x]=arr[i];
    }
    for(i=0;i<x;i++)
    {
        arr[loc+i]=brr[i];
    }
    printf("your new array is:\n");
    for(i=0;i<n+x;i++)
    {
        printf("%d\n",arr[i]);

    }
}
