#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    n = m / 2;
    for( int i = 1; i <= n; i++ )
    {
        for(int j = 0; j < 2 * (n - i) + 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < 2 * i - 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    if(m % 2 == 1)
    {    for(int i = 0; i < 2 * n + 1; i++)
         {
            printf("* ");
         }
         printf("\n");
    }
    for(int i = 1; i <= n; i++ )
    {
        for(int j = 0; j < 2 * i - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < 2 * ( n - i) + 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}