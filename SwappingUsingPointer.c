
#include<stdio.h>
void _swp(int* x, int* y);

int main()
{
    int m=3,n=5;
    _swp(&m,&n);
    printf("m=%d  n=%d",m,n);
    return 0;
}


void _swp(int* x,int* y)
{
    int t= *x;
    *x=*y;
    *y=t;
}
