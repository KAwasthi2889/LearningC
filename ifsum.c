#include <stdio.h>
int main()
{
    //This is a program which will tell if the sum of 2 numbers is greater than 100 or not.
    int num1,num2,sum;
    printf("Write any 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
    if(sum >= 100)
     printf("The sum of %d and %d is %d which is greater than or equal to 100\n",num1,num2,sum);
    else
     printf("The sum of %d and %d is %d which is less than 100\n",num1,num2,sum);
    return 0;
}