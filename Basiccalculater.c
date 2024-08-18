#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,op;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
    printf("Enter both operands: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&op);
    switch(op){
    case 1	:printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:printf("Division of Two Numbers is : %d",a/b);
        break;
    case 5	:
        break;
    default	:printf(" please Enter Correct Choice.");
        break;
    }
    getch();
}
