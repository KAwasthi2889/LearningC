/*
In Boxing the weight class of a boxer is decided by following category:-
S.No.   Class               Weight(in pounds)
1)      Fly-weight          <115
2)      Bantan weight       115-121
3)      Feather weight      122-153
4)      Middle weight       154-189
5)      Heavy weight        >189
Write the program using do-while condition.
*/
#include <stdio.h>

int main() 
{
    int a;
    do {
        printf("Enter your weight: ");
        scanf("%d", &a);
        if (a < 115) 
            printf("Your weight is %d which qualifies you to Fly-weight class.\n", a);
        else if (a >= 115 && a <= 121)
            printf("Your weight is %d which qualifies you to Bantan weight class.\n", a);
        else if (a >= 122 && a <= 153) 
            printf("Your weight is %d which qualifies you to Feather weight class.\n", a);
        else if (a >= 154 && a <= 189) 
            printf("Your weight is %d which qualifies you to Middle weight class.\n", a);
        else if (a > 189) 
            printf("Your weight is %d which qualifies you to Heavy weight class.\n", a);
    } while (a > 0);
    if (a < 0)
        printf("Invalid weight. Please enter a positive weight.\n");
    return 0;
}