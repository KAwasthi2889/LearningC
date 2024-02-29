#include <stdio.h>
void greet(char name[]) // function in itself will specify the input return type.
{
    printf("Hello %s\n", name);
}
int main()
{
    greet("Mohit"); // function in main will take the input like scanf.
    greet("Aman");
    greet("Ankit");
    return 0;
}