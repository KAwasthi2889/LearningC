#include <stdio.h>
int main()
{
    //This program will add any 3 numbers.
    int num1,num2,sum;
    printf("Write any 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}
