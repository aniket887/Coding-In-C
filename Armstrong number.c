#include<stdio.h>
#include<conio.h>
void main()
{
    int n = 153, r,a;
    int s = 0;
    a=n;
    while (n>0) {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(a==s){
        printf("amr");
    }
    else{
        printf("no");
    }

}

