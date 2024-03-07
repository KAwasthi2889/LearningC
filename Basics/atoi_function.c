#include <stdio.h>
#include <stdlib.h>
// atoi is a function in C that converts a string to an integer. It stands for "ASCII to integer".

int main() 
{
    char str[] = "12345";
    int num = atoi(str);
    printf("The integer value is: %d\n", num);
    return 0;
}