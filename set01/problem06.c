#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
}

int input(int *a, int *b, int *c)
{
    printf("Enter a value:\n");
    scanf("%d",&a);
    printf("Enter a value:\n");
    scanf("%d",&b);
    printf("Enter a value:\n");
    scanf("%d",&c);
}

void compare(int a, int b, int c, int *largest)
{
    a = *largest;
    if (b> *largest)
    {
        *largest = b;
    }
    if (c> *largest)
    {
        *largest = c;
    }
    return *largest;
}
void output(int a, int b, int c, int largest)
{
    printf("The largest number out of %d,%d,%d is %d",a,b,c,largest);
}