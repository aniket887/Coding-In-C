
#include <stdio.h>

// Function to find the nth Fibonacci number
int fib(int n)
{
    if (n == 1) {
        return n-1;
    }
    else if(n==2)
        return n-1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("F(n) = %d", fib(n));

    return 0;
}
