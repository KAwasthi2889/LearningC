#include <stdio.h>
int main ()
{
    double a, b, d;
    char c;
    printf("Write your operation of 2 numbers.\n");
    scanf("%lf %c %lf", &a, &c, &b);
    if(c == '+')
        d = a + b;
    if(c == '-')
        d = a - b;
    if(c == '*' || c == 'x')
        d = a * b;
    if(c == '/')
        d = a / b;
    printf("%f %c %f = %f\n", a, c, b, d);
    return 0;
}