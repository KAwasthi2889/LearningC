#include <stdio.h>
int main()
{
    //In this program we will write the table of a given number.
    int a, b, c;
    printf("Enter a number:\n");
    scanf("%d", &a);
    for(b=1;b<=10;b++)
    {
        c=a*b;
        printf("%d X %d = %d\n", a, b, c);
    }
    return 0;
}