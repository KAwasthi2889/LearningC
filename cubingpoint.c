#include <stdio.h>
void cube(int *a)
{
    *a = (*a) * (*a) * (*a);
}
int main()
{
    int x, b;
    printf("What number do you want the cube of?\n");
    scanf("%d", &x);
    b=x;
    cube(&x);
    printf("Cube of %d is %d\n", b, x);
    return 0;
}

