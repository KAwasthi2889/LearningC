// New way if use if-else using ternary operation.
// 2 types of syntax:-
// variable = (condition) ? Expression2 : Expression3;
// (condition) ? (variable = Expression2) : (variable = Expression3);

#include <stdio.h>

int main(void)
{
    int x = 3;
    if (x < 5)
        printf("less than 5\n");
    else    
        printf("greater or equal to 5\n");
// Both do the same thing but used in diffrent way. Ternary operator:-
    (x < 5) ? (x = 5) : (x = 4);
    (x < 5) ? printf("less than 5\n") : printf("greater or equal to 5\n");
    x = (x < 5) ? printf("less than 5\n") : printf("greater or equal to 5\n");
}