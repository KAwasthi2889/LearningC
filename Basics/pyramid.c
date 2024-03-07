#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    printf("Upper pyramid:-\n");
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
    printf("\n\n\nLower pyramid:-\n");
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