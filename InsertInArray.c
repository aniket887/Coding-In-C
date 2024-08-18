#include<stdio.h>
main()
{
    int arr[50],n,i,j,k,m,key,loc;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your array is:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    printf("enter new element to insert:");
    scanf("%d",&key);
    printf("enter location of new element:");
    scanf("%d",&loc);
    for(m=n-1;m>=loc;m--)
    {
        arr[m+1]=arr[m];
    }
    arr[loc]=key;
    printf("your new array is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",arr[k]);

    }
}
