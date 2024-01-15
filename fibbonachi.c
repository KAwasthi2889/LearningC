#include <stdio.h>
int fibbonachi()
{
    int a, b=0, c=1, d;
    printf("How many numbers do you want of fibbonachi series?\n");
    scanf("%d", &a);
    printf("%d ", b);
    printf("%d ", c);
    for(int i=2; i<a; i++)
    {
        d=b+c;
        printf("%d ", d);
        b=c;
        c=d;
    }   
    printf("\n");
}
int main()
{
    fibbonachi();
    return 0;
}