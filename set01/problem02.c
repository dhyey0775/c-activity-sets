//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b,sum;

    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    sum = a+b;
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;
}

