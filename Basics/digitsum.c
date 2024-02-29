#include <stdio.h>
int main()
{
    //We will write a program which will add the digits of the given number.
    int a, b, sum=0;
    printf("Write any number:\n");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}