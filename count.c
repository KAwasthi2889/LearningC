#include <stdio.h>
int main()
{
    //This is a program which will count the natural number till the given numbers.
    int a=0,b;
    printf("Till how much do you want to count?  ");
    scanf("%d",&b);
    while (a<=b)
    {
       printf("%d\n",a);
       a=a+1;
    }
    return 0;
}