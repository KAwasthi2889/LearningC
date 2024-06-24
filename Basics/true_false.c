// 1 and 0 are used to define true or false as c dosent cant return true or false.
// any non zero number is taken as true.
#include <stdio.h>

int check(int data);

int main(void)
{
    int data = 4;
    if (check(data))
        printf("Divisible by 2\n");
    else
        printf("Not divisible by 2\n");
}

int check(int data)
{
    if (data % 2 == 0)
        return 1;
    return 0;
}
