#include <stdio.h>

int fibb(int i)
{
    if (i <= 1)
    {
        return i;
    }
    else
    {
        return fibb(i - 1) + fibb(i - 2);
    }
}
int main(void)
{
    int n;
    printf("Enter the number of terms of series you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibb(i));
    }
    printf("\n");
}
