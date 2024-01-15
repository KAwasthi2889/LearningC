#include <stdio.h>
int cube(int a)
{
    printf("Cube of %d is %d\n", a, a*a*a);
}
int main()
{
    int x;
    printf("What number do you want the cube of?\n");
    scanf("%d",&x);
    cube(x);
    return 0;
}