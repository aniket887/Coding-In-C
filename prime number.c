#include<stdio.h>
void main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                printf("not prime");
                break;
            }
        }
        if(i==n){
            printf("%d is prime",n);
        }
    }
    getch();
}

